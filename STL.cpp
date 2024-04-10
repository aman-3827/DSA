// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void explainpair(){
//     // pair<int, int> p = {1, 3};
//     // cout << p.first << " " << p.second;
//     pair<int, int>arr[] = {{1,2},{3,4},{5,6},{6,7}};
//     cout << arr[2].first;
// }

// int main(){
//     explainpair();
//     return 0;
// }

// #include<iostream>
// #include<set>
// using namespace std;
//  void explainvector(){
//         vector <int> st;
//         st.push.front(1);
//         st.push.front(2);
//         st.push.front(4);
//         st.push.front(5);
//         st.push.front(6);
        
//         for(auto s:st) cout<<s<<" ";

//         // cout << st.first << " " << st.second.first << " " << st.second.second;
//     return 0;
//     }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num = 5;
    
//     cout << &num << endl;

//     int *ptr = &num;

//     cout << *ptr << endl;
//     return 0;

//     int num = 7789;
//     cout << num%10 << endl;
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


// #include <iostream>
// #include <vector>
// #include <algorithm> // for std::sort

// int main() {
//     // Create a vector
//     std::vector<int> vec = {5, 2, 9, 3, 7};

//     // Sort the vector
//     std::sort(vec.begin(), vec.end());

//     // Print the sorted vector
//     std::cout << "Sorted vector: ";
//     for (int num : vec) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
