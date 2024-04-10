#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> s;   //LIFO
    s.push("Aman");
    s.push("rahul");
    s.push("nitin");

    cout << "Top Element -> " << s.top() << endl;
    s.pop();
    cout << "Top Element -> " << s.top() << endl;

    cout << "size of stack -> " << s.size() << endl;
    return 0;
}