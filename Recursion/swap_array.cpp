// #include <bits/stdc++.h>
// using namespace std;

// void f(int i,int arr[],int n){
//     if(i>=n/2){
//         return;
//     }
//     swap(arr[i],arr[n-i-1]);
//     f(i+1,arr,n);

// }


// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : " << endl;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     f(0,arr,n);
//     cout << "Swaped array : " << endl; 
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
    
// }

// palindrome

// #include <bits/stdc++.h>
// using namespace std;

// bool f(int i,string &s){
//     if(i>=(s.size()/2)) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     f(i+1,s);
// }

// int main(){
//     string s;
//     cout << "Enter Word : ";
//     cin >> s;
//     if(f(0,s)==0){
//         cout << "Not Palindrome";
//     }
//     else{
//         cout << "Palindrome";
//     }
//     return 0;
    
// }

