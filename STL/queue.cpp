#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q; //FIFO
    q.push("Aman");
    q.push("kumar");
    q.push("chauhan");

    cout << "first element -> " << q.front() << endl;
    q.pop();
    cout << "First element -> " << q.front() << endl;

    cout << "Size fo queue -> " << q.size() << endl;
    return 0;
}