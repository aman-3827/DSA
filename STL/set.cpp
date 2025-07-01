#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(2);

    cout << "Before erase" << endl;
    for(auto it : s){
        cout << it << endl;
    }

    cout << "Size of -> " << s.size() << endl;   //current size of set is 4 because it store only unique item as 2 is appeard 2 times but stored only 1 time

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    cout << "After Erase" << endl;
    for(auto it : s){
        cout << it << endl;
    }

    cout << "5 is prersent or not " <<s.count(5) <<endl;  // 1 mean true and 0 means false
    set<int>::iterator itr  = s.find(2);

    return 0;
}