// // // // 1-MERGE SORT

// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // // Merge two sorted halves
// // // void merge(int arr[], int left, int mid, int right) {
// // //     vector<int> temp;  // temporary array
// // //     int i = left;      // start of left half
// // //     int j = mid+1;     // start of right half

// // //     // merge both halves
// // //     while(i <= mid && j <= right) {
// // //         if(arr[i] <= arr[j]) {
// // //             temp.push_back(arr[i]);
// // //             i++;
// // //         } else {
// // //             temp.push_back(arr[j]);
// // //             j++;
// // //         }
// // //     }

// // //     // copy remaining elements (if any)
// // //     while(i <= mid) temp.push_back(arr[i++]);
// // //     while(j <= right) temp.push_back(arr[j++]);

// // //     // put sorted temp back into arr
// // //     for(int k=0; k<temp.size(); k++) {
// // //         arr[left + k] = temp[k];
// // //     }
// // // }

// // // // Divide + Recursion
// // // void mergeSort(int arr[], int left, int right) {
// // //     if(left >= right) return;  // base case (1 element)

// // //     int mid = (left + right) / 2;
// // //     mergeSort(arr, left, mid);        // sort left half
// // //     mergeSort(arr, mid+1, right);     // sort right half
// // //     merge(arr, left, mid, right);     // merge sorted halves
// // // }

// // // int main() {
// // //     int n;
// // //     cout << "Enter n : ";
// // //     cin >> n;
// // //     int arr[n];
// // //     cout << "Enter " << n << " elements : ";
// // //     for(int i=0;i<n;i++){
// // //         cin >> arr[i];
// // //     }
// // //     mergeSort(arr, 0, n-1);

// // //     cout << "Sorted Array: ";
// // //     for(int i=0; i<n; i++) cout << arr[i] << " ";
// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // void merge(int arr[],int left,int mid,int right){
// //     vector < int > temp;
    
// //     int i=left;
// //     int j=mid+1;

// //     while(i<=mid && j<=right){
// //         if(arr[i]<=arr[j]){
// //             temp.push_back(arr[i]);
// //             i++;
// //         }
// //         else{
// //             temp.push_back(arr[j]);
// //             j++;
// //         }
// //     }
// //     while(i<=mid){
// //         temp.push_back(arr[i++]);
// //     }
// //     while(j<=right){
// //         temp.push_back(arr[j++]);
// //     }


// //     for(int k=0;k<temp.size();k++){
// //         arr[left + k]=temp[k];
// //     }
// // }


// // void mergesort(int arr[],int left,int right){
// //     if(left>=right) return;
// //     int mid=(left+right)/2;

// //     mergesort(arr,left,mid);
// //     mergesort(arr,mid+1,right);
// //     merge(arr,left,mid,right);

// // }

// // int main(){
// //     int n;
// //     cout << "Enter n : ";
// //     cin >> n;
// //     int arr[n];
// //     cout << "Enter " << n << " elements : ";
// //     for(int i=0;i<n;i++){
// //         cin >> arr[i];
// //     }
// //     cout << "Array entered : ";
// //     for(int i=0;i<n;i++){
// //         cout << arr[i] << " ";
// //     }
// //     cout << "\nSorted Array : ";
// //     mergesort(arr,0,n-1);
// //     for(int i=0;i<n;i++){
// //         cout << arr[i] << " ";
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// void merge(int arr[],int left,int mid,int right){
//     vector <int > temp;
    
//     int i=left;
//     int j=mid+1;

//     while(i<=mid && j<=right){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         }
//         else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(i<=mid) {
//         temp.push_back(arr[i]);
//         i++;
//     }
//     while(j<=right) {
//         temp.push_back(arr[j]);
//         j++;
//     }

//     for(int k=0 ; k< temp.size();k++){
//         arr[left + k]= temp[k];

//     }
// }

// void mergesort(int arr[],int left,int right){
//     if(left>=right){
//         return;
//     }
//     int mid=(left+right)/2;

//     mergesort(arr,left,mid);
//     mergesort(arr,mid+1,right);
//     merge(arr,left,mid,right);

// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Array entered : ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << "\nSorted Array : ";
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }



// QUCIK short

// #include <bits/stdc++.h>
// using namespace std;

// int partition(int arr[],int left,int right){
//     int pivot=arr[left];
//     int i=left;
//     int j=right;

//     while(i<j){
//         while(arr[i]<=pivot && i<=right-1){
//             i++;
//         }

//         while(arr[j] > pivot && j>=left+1){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[left],arr[j]);
//     return j;
// }

// void qck_sort(int arr[],int left,int right){
//     if(left<right){
//         int pindex=partition(arr,left,right);
//         qck_sort(arr,left,pindex-1);
//         qck_sort(arr,pindex+1,right);
//     }
// }


// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     qck_sort(arr,0,n-1);
//     cout << "Sorted Array : ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
    
// }

// #include <bits/stdc++.h>
// using namespace std;

// int pt(int arr[],int left,int right){
//     int pivot=arr[left];
//     int i=left;
//     int j=right;
//     while(i<j){
//         while(arr[i]<=pivot && i<=right-1){
//             i++;
//         }
//         while(arr[j]> pivot && j >= left+1){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[left],arr[j]);
//     return j;

// }



// void quick(int arr[],int left,int right){
//     if( left < right){
//         int pi=pt(arr,left,right);

//         quick(arr,left,pi-1);
//         quick(arr,pi+1,right);
        

//     }
// }

// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements : ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     quick(arr,0,n-1);
//     cout << "Sorted Array : ";
//     for(int i=0;i<n;i++){
//         cout  <<  arr[i] << " ";
//     }
//     cout << "\nlargest element : " << arr[n-1];
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >>n;
    int arr[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min,max;
    min=max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }
    cout << "Max : " << max;
    cout << "Min : " << min;
    
    return 0;
}