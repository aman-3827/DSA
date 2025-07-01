#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //vector<int> vec(5,1); "its means vetor of size of 5 and all 5 elements are 1"
    vector<int> a(5,1);
    for(auto i:a){
        cout << i << endl; ;
    }

    vector<int> v;
    cout << "Size = " << v.capacity() << endl;
    v.push_back(1);
    //After inserting 1 element the size is automatically adapt
    cout << "Size = " << v.capacity() << endl;
    v.push_back(2);
    //After inserting 1 element the size is automatically adapt
    cout << "Size = " << v.capacity() << endl;
    v.push_back(3);
    //after inserting 3 elements the size is double of this vector as it automatically increase its size
    cout << "Size = " << v.capacity() << endl;
    //check size
    cout << "Element =" << v.size() << endl;

    cout << "Element at second index = " << v.at(2) << endl; 
    cout << "Element at front = " << v.front() << endl;
    cout << "Element at last = " << v.back() << endl;

    //printing vector
    cout<<"Before pop" << endl;
    for(auto it:v){
        cout<<it<<endl;;
    }

    //delete form last
    v.pop_back(); 

    //After pop
    cout << "After pop" << endl;
     for(auto it:v){
        cout<<it<<endl;
     }

    //clear
    cout << "Before clear size = " << v.size() << endl;
    v.clear();
    cout << "After clear size = " << v.size() << endl;

    return 0;
}