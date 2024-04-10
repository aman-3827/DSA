#include<bits/stdc++.h>
using namespace std;

int main(){
    // int basic[3]= {1,2,3};
    // cout << basic << endl;
    array<int,4> ar = {1,2,3,4};
    int size = ar.size();
    for(int i=0;i < size;i++){
        cout << ar[i] << endl;
    }

    cout << "Element at second index = " << ar.at(2) << endl;
    cout << "Array is empty or not = " << ar.empty() << endl;
     cout << "Element at front = " << ar.front() << endl;
      cout << "Element at last = " << ar.back() << endl;
    return 0;
}