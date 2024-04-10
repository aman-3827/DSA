#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // for(auto it:d){
    //     cout << it << endl;
    // }
    // d.pop_front();
    //  for(auto it:d){
    //     cout << it << endl;
    // }

    cout << "Element of first index-> " << d.at(1) << endl;
    cout << "front -> " << d.front() << endl;
    cout << "Last -> " << d.back() << endl;
    cout << "empty or not -> " << d.empty() << endl;

    cout << d.size() <<endl;
    d.erase(d.begin(),d.begin()+1);
    cout << d.size() <<endl;
    // for(auto it:d){
    //     cout << it << endl;
    // }
    return 0;
}