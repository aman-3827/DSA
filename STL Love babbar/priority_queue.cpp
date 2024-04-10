#include<bits/stdc++.h>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    cout << "size of -> " << maxi.size() << endl;
    int n = maxi.size();
    for(int i = 0;i<n;i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }cout<<endl;

    //min heap
    priority_queue<int,vector<int>, greater<int> > mini;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    int m = mini.size();
    for(int j = 0;j<m;j++){
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;

    cout << "Empty or not " << mini.empty() << endl; //here 1 is equal to true and 0 is equal to false
    return 0;
}