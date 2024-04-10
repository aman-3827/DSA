// #include<iostream>
// using namespace std;

// void printpattern(int n){
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             cout << "*" ;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern(n);
//     return 0; 
//     }

// #include<iostream>
// using namespace std;

// void printpattern(int n){
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<=i;j++){
//             cout<<"*";;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void printpattern(int n){
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<=i;j++){
//             cout<<i+1;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void printpattern(int n){
//     for(int i = 1;i<=n;i++){
//         for(int j = 0;j<n-i+1;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void printpattern(int n){
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=n-i+1;j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void printpattern(int n){
//    for(int i = 0;i<n;i++){
//      for(int j=0;j<n-i+1;j++){
//         cout << " ";
//     } for(int j=0;j<2*i+1;j++){
//         cout << "*";
//     } for(int j=0;j<n-i+1;j++){
//         cout << " ";
//     }
//     cout << endl;
//    }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern(n);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void printpattern(int n){
//    for(int i = 0;i<n;i++){
//      for(int j=0;j<i;j++){
//         cout << " ";
//     } for(int j=0;j<2*n-(2*i+1);j++){
//         cout << "*";
//     } for(int j=0;j<i;j++){
//         cout << " ";
//     }
//     cout << endl;
//    }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern(n);
//     return 0;
//}

// #include<iostream>
// using namespace std;

// void printpattern1(int n){
//    for(int i = 0;i<n;i++){
//      for(int j=0;j<n-i+1;j++){
//         cout << " ";
//     } for(int j=0;j<2*i+1;j++){
//         cout << "*";
//     } for(int j=0;j<n-i+1;j++){
//         cout << " ";
//     }
//     cout << endl;
//    }
// }

// void printpattern2(int n){
//    for(int i = 0;i<n;i++){
//      for(int j=0;j<i;j++){
//         cout << " ";
//     } for(int j=0;j<2*n-(2*i+1);j++){
//         cout << "*";
//     } for(int j=0;j<i;j++){
//         cout << " ";
//     }
//     cout << endl;
//    }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern1(n);
//     printpattern2(n);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void printpattern1(int n){
//    for(int i = 1;i<2*-1;i++){
//     int star = i;
//      for(int j=1;j<=star;j++){
//         cout << "*";
//     } 
//     cout << endl;
//    }
// }

// void printpattern2(int n){
//    for(int i = 0;i<n;i++){
//      for(int j=0;j<i;j++){
//         cout << " ";
//     } for(int j=0;j<2*n-(2*i+1);j++){
//         cout << "*";
//     } for(int j=0;j<i;j++){
//         cout << " ";
//     }
//     cout << endl;
//    }
// }
// int main(){
//     int n;
//     cin >> n;
//     printpattern1(n);
//     // printpattern2(n);
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void decimaltobinary(int n){
//     int arr[10000],i = 0, num = n;
//     while(n != 0){
//         arr[i] = n % 2;
//         i++;
//         n = n/2;
//         for(i = i - 1;i>=0;i--){
//             if(arr[i]==1){
//                 cout << "Even" << endl;
//             }
//             else{
//                 cout << "Odd" << endl;
//             }
//         }
//     }
// }

// int main() {
// 	int t;
// 	cin >> t;
// 	while(t--){
// 	    int n;
// 	    cin >> n;
// 	    decimaltobinary(n);
	    
// 	}

// }


// class Solution {
// public:
//     bool isPalindrome(int x) {
//         auto dup = x;
//         int revnum = 0;
//         while(x>0){
//             auto lastdigit = x%10;
//             x = x%10;
//             revnum = x*10+lastdigit;
//         }
//         return revnum;
//         // if(dup==revnum){
//         //     cout << "true" << endl;
//         // }
//         // else{
//         //     cout << "false" << endl;
//         // }
//     }
// };


// #include<bits/stdc++.h>
// using namespace std;
// int countdigits(int n){
//     int count = 0;
//     if(n == 0){
//         return 1;
//     }
//     while(n!=0){
//         n /= 10;
//         count++;
//     }
//     return count;
// }

// int main(){
//     int n;
//     cin >> n;
//     int digits = countdigits(n);
//     cout << digits << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int sumOfAllDivisors(int n){
// 	// Write your code here.
// 	int sum = 0;
// 	for(int i=1;i<=n;i++){
// 		if(n%i==0){
// 			return i;
// 			sum = sum + i;
// 		}
// 	}
//     cout << sum;	
// }
// int main(){
//     int n;
//     cin >> n;
//     sumOfAllDivisors(n);
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

int main() {
    // Create a vector
    std::vector<int> vec = {5, 2, 9, 3, 7};

    // Sort the vector
    std::sort(vec.begin(), vec.end());

    // Print the sorted vector
    std::cout << "Sorted vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
