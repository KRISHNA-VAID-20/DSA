// // 1 Largest element in array 

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int max,min;
//     max=min=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout << "Max : " << max;
//     cout << "\nMin : " << min;
//     return 0;

// }

// // 2 Second smallest element

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int smallest=arr[0];
//     int slargest=-1;
//     for(int i=1;i<n;i++){
//         if(arr[i] > smallest){
//             slargest=smallest;
//             smallest=arr[i];
//         }
//         else if(arr[i] < smallest && arr[i] > slargest){
//             slargest=arr[i];
//         }
//     }
//     cout << "Largest : " << smallest;
//     cout << "\nSecond smallest : " << slargest;
//     return 0;
// }

// //2nd smallest + smallestt
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int smallest=arr[0];
//     int ssmallest=100000;
//     for(int i=1;i<n;i++){
//         if(arr[i] < smallest){
//             ssmallest=smallest;
//             smallest=arr[i];
//         }
//         else if(arr[i] > smallest && arr[i] < ssmallest){
//             ssmallest=arr[i];
//         }
//     }
//     cout << "Smallest : " << smallest;
//     cout << "\nSecond Smallest : " << ssmallest;
//     return 0;
// }

// //3 check arry is sorted ??

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int is_sorted=1;
//     for(int i=1;i<n;i++){
//         if(arr[i]>=arr[i-1]){
//         }
//         else{
//             is_sorted=0;
//         }
//     }
//     if(is_sorted==0){
//         cout << "not sorted Array ";
//     }
//     else{
//         cout << "Sorted";
//     }
//     return 0;

// }

// //4 Remove duplicates from array 

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int i=0;
//     for(int j=1;j<n;j++){
//         if(arr[i] != arr[j]){
//             arr[i+1]=arr[j];
//             i++;
//         }
//     }
//     i=i+1;
//     cout << "Unique elements : " << i;
//     return 0;
// }

// //using set 
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Array Entered : ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     set <int > st ;
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
//     cout <<"\nNew array : ";
//     for(auto it : st){
//         cout  <<  it << " ";
//     }
//     return 0;

// }

// //5 - Left rotate by one place 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     cout << "New Array : ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// //6 Left rotate by D places

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Rotated Array : ";
//     for(int i=n-1;i>=0;i--){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// //revision 
// //largest element

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int max=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]> max){
//             max=arr[i];
//         }
//     }
//     cout << "Max : " << max;
//     return 0;
// }

// //2 second largest without soritng

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int largest=arr[0];
//     int slargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             slargest=largest;
//             largest=arr[i];
//         }
//         if(arr[i] < largest & arr[i] > slargest){
//             slargest=arr[i];
//         }
//     }
//     cout << "Largest : " << largest << endl;
//     cout << "Second Largest : " << slargest;
//     return 0;
// }

// //3 check array is sorted

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int is_sorted=1;
//     for(int i=1;i<n;i++){
//         if(arr[i]>=arr[i-1]){
//         }
//         else{
//             is_sorted=0;
//         }
//     }
//     if(is_sorted){
//         cout << "Sorted";
//     }
//     else{
//         cout << "Not sorted";
//     }
//     return 0;
// }

// //4 -remove duplicates from array

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int i=0;
//     for(int j=1;j<n;j++){
//         if(arr[i] != arr[j]){
//             arr[i+1]=arr[j];
//             i++;
//         }
//     }
//     i=i+1;
//     cout << "Unique elements : " << i;
//     return 0;

// }

// //5 Left rortate array by 1 place

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int temp=arr[0];

//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     cout << "New array : " ;
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

 
