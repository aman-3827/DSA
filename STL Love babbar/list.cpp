#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> l;
    list <int> n(5, 100);

    l.push_back(1);
    l.push_front(2);

    for( auto it:n){
        cout << it << " ";
    }
    // l.erase(l.begin());
    // // l.pop_back();
    // for( auto it:l){
    //     cout<< "After Erase" << " " << it;
    // }
    
    // cout << l.size() << endl;
    return 0;
}