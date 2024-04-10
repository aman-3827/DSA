// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }


//     //precomputing
//     int hash[13] = {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }


//     int q;
//     cin >> q;
//     while(q--){ 
//         int number;
//         cin >> number;
//         //fetch method
//         cout << hash[number] << endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //pre compute

    map<int, int> mpp;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }

    // for(auto it: mpp){
    //     cout << it.first << "->" << it.second << endl;;
    // }


    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}