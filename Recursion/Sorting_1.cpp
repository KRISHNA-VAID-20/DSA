// // #include <iostream>
// // using namespace std;

// // void selection_sort(int arr[],int n){
// //     for(int i=0;i<n-1;i++){
// //         int min=i;
// //         for(int j=i+1;j<n;j++){
// //             if(arr[j]<arr[min]){
// //                 min=j;
// //             }
// //         }
// //         int temp=arr[i];
// //         arr[i]=arr[min];
// //         arr[min]=temp;
// //     }

// // }

// // void bubble_sort(int arr[],int n){
// //     for(int i=0;i<n-1;i++){
// //         for(int j=0;j<n-i-1;j++){
// //             if(arr[j]>arr[j+1]){
// //                 int temp=arr[j+1];
// //                 arr[j+1]=arr[j];
// //                 arr[j]=temp;
// //             }
// //         }
// //     }

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
// //     // selection_sort(arr,n);
// //     bubble_sort(arr,n);
// //     cout << "Sorted Array : " << endl;
// //     for(int i=0;i<n;i++){
// //         cout << arr[i] << " " ;
// //     }
// //     return 0;

// // }

// // INSERTION SORT

// #include <iostream>
// using namespace std;

// void insertion_sort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
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

//     insertion_sort(arr,n);
//     cout << "Sorted Array : ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }   

// // #include <bits/stdc++.h>
// // using namespace std;

// // void insertionSort(int arr[], int n) {
// //     for(int i=1; i<n; i++) {
// //         int key = arr[i];   // element to be placed
// //         int j = i-1;

// //         // shift bigger elements to the right
// //         while(j >= 0 && arr[j] > key) {
// //             arr[j+1] = arr[j];
// //             j--;
// //         }
// //         arr[j+1] = key;  // place key in correct spot
// //     }
// // }

// // int main() {
// //     int arr[] = {64, 25, 12, 22, 11};
// //     int n = sizeof(arr)/sizeof(arr[0]);

// //     insertionSort(arr, n);

// //     cout << "Sorted array: ";
// //     for(int i=0; i<n; i++)
// //         cout << arr[i] << " ";
// //     return 0;
// // }

