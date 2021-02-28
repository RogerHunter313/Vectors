#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<int> *vp = new vector<int>{}; //dynamic, need to deallocate
    vector<int> v; // static

    vector<int> v2(10,-2); //size of 10, fill with 02
    vector<int> v3(100);
    for(int i=0; i < v2.size(); i++) {
        cout <<v2[i]<<endl;
    }

    sort(v2.begin(), v2.end());

    for(int i = 0; i < 100; i++) {
            cout<<"Capacity " << v.capacity() << endl;
        v.push_back(i+1);
        cout << "Size " << v.size() <<endl;
    }
  /*  for (int i=0; i<v.size(); i++) {
        cout <<v[i]<<endl;
    }

    /*
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    //v[4] = 1002;  //invalid, use push_back
    //v[5] = 1234;

    v.push_back(23);
    v.push_back(234);

    v.pop_back();

    for(int i = 0; i < v.size(); i++) {
        cout <<v[i] << endl;
    }

  /*  cout<<v.at(4)<<endl;
    cout<<v.at(6)<<endl; //.at() is safer because it will check the index, v[6] can print out garbarge values
*/

    return 0;
}
