// MY METHOD 

// #include <iostream>
// using namespace std;

// int f(int number,int arr[],int n){
//     int count =0;
//     for(int i=0;i<n;i++){
//         if (number == arr[i]){
//             count +=1;
//         }
//     }
//     return count ;
// }
// int main(){
//     int n,ele;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : " << endl;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Array Entered : " << endl;
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " " ;
//     }
//     cout << "\nEnter element to search how many times it appeared  : " ;
//     cin >> ele;
//     cout << "Times " <<  "[" << ele << "]" <<" appeared :" << f(ele,arr,n);
//     char sh;
//     while(1){
//         cout << "\nWanna search again or exit ?? "<< endl;
//         cout << "Press [S] to search again or any other key to exit : ";
//         cin >> sh;
//         if(sh=='s'){
//             cout << "Enter element to search how many times it appeared : " ;
//             cin >> ele;
//             cout << "Times " <<  "[" << ele << "]" <<" appeared :" << f(ele,arr,n);
//         }
//         else{
//             cout << "\n ----You exited---- ";
//             return 0;
//         }
//     }
// }

// HASHIING 

// #include <bits/stdc++.h>
// using namespace std;
// int hashh[10000000];
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     // precompute
//     for(int i=0;i<n;i++){
//         hashh[arr[i]]+=1;
//     }

//     int q;
//     cout << "Enter how many elements to search : ";
//     cin >> q;
//     while(q--){
//         int numb;
//         cout << "Enter : ";
//         cin >> numb;
//         cout << numb << " apeared : " <<  hashh[numb] << endl;
//     }
//     return 0;
// }

// Charcter hashing my method

// #include <iostream>
// using namespace std;

// int f(char c,string s){
//     int count=0;
//     for(int i=0;i<s.size();i++){
//         if(c==s[i]){
//             count +=1;
//         }
//     }
//     return count ;

// }
// int main(){
//     string name;
//     cout << "Enter string : ";
//     cin >> name;
//     char c;
//     cout << "Enter Character to check : ";
//     cin >> c;
//     cout << "No of times [" << c << "] apperaed : "<< f(c,name);
//     while(1){
//         cout << "\nEnter Character to check : ";
//         cin >> c;
//         cout << "No of times [" << c << "] apperaed : "<< f(c,name);
//     }
//     return 0;

// }

// Actual  method

// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cout << "Enter string : ";
//     cin >> s;

//     // pre compute
//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }
    
//     int q;
//     cout << "Enter no. of queris : ";
//     cin >> q;
//     while(q--){
//         cout << "Enter characters to check : ";
//         char c;
//         cin >> c;
//         // fetch 
//         cout << "No. of times " << c << " appeared : " << hash[c] << endl;
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter "<< n << " elemnets : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     // pre compute
//     int hashh[100000]={0}; // if wanna use big number declare 10 ** 8 outside main function
//     for(int i=0;i<n;i++){
//         hashh[arr[i]]+=1;
//     }

//     int q;
//     cout << "Enter number to search : ";
//     cin >> q;
//     // fetch
//     cout << q << " appeared " << hashh[q] << " times " << endl;
//     while(1){
//          cout << "Enter number to search : ";
//         cin >> q;
//         cout << q << " appeared " << hashh[q] << " times " << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     string name;
//     cout << "Enter string : ";
//     cin >> name;

//     int hash[256]={0};  used 256 Because there are in total 256 charcter including uppercase and lowercase charcter
//     for(int i=0;i<name.size();i++){
//         hash[name[i]]+=1;
//     }

//     char q;
//     cout << "Enter charcter to search : ";
//     cin >> q;
//     // fetch
//     cout << q << " appeared " << hash[q] << " times " << endl;
//     while(1){
//         cout << "Enter character to search : ";
//         cin >> q;
//         cout << q << " appeared " << hash[q] << " times " << endl;
//     }
//     return 0;
// }
