#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    // for(auto it : v){
    //     cout << it << endl;
    // }

    cout << "7 is present or not -> " << binary_search(v.begin(), v.end(),7) << endl;     //used to search the element in vector

    rotate(v.begin(),v.begin()+1, v.end());
    cout << "Vector after rotate " << endl;
    for(auto it : v){
        cout << it << endl;
    }

    sort(v.begin(), v.end());  //intro sort (combination of quick heap insertion sort)
    cout << "Vector after sort" << endl;
    for(auto it : v){
        cout << it << endl;
    }

    int a = 4;
    int b  = 8;
    cout << "max of a and b -> " << max(a,b) << endl;
    cout << "min of a and b -> " << min(a,b) << endl;
    swap(a, b);
    cout << "a is -> " << a << endl;
    cout << "b is -> " << b << endl;

    string s = "aman";
    reverse(s.begin(), s.end());
    cout << "reversed string -> " << s << endl;
    return 0;
}