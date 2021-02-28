#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) { // parameter is 2 dimensional, vector of vectors, assuming all vectors same size
        vector<int> ans; // creation of answer vector
        int m = matrix.size(); // initialize m = number of rows = size of the vector of vectors
        if(m==0) return ans;  // accounting for null input
        int n = matrix[0].size(); // initialize n = number of columns = size of each vector, again assuming all same size
        if(n==0) return ans;  // account for null input

        int sr = 0, er = m - 1, sc = 0, ec = n - 1; // initialize start row, end row, start column, end column
        int count = 0;  // initialize total count of "printed values", must be lower than m*n

        while(sr <= er && sc <= ec) { // start/end can't overlap
            // print sr
            for(int i = sc; i <=ec; i++) {
                ans.push_back(matrix[sr][i]); // print that first row = entire first matrix
                count++; // keep track of total printed values
            }
            sr++; // iterate to next row
            if(count==m*n) return ans;  // return once we iterate through all values

            // print ec
            for(int i = sr; i <= er; i++) {  // we continue the pattern, iterating the row/column closer to center
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            if(count == m*n) return ans;

            // print er
            for(int i = ec; i >= sc; i--) {
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
            if(count == m*n) return ans;

            // print sc
            for (int i = er; i >= sr; i--) {
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
            if(count == m*n) return ans;

        }
        return ans;
    }
};

int main() {

    vector<vector<int>> inputMatrix = {{1,2,3},{4,5,6},{7,8,9}};

    Solution solution;

    vector<int> answer = solution.spiralOrder(inputMatrix);

    for (int element : answer) {
        cout << element << endl;
    }


    return 0;
}
