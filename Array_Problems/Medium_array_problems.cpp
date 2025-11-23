// 1 - Two sum 
// Brute Force Approach
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Entered Elements : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Enter target element : ";
    cin >> target; 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout << "Target exists " << endl;
                cout << arr[i] << "+" << arr[j] << endl;
                
            }
            
        }
    }
    return 0;
}

// Sorted arrys of 0 ,1 ,2 (better solution)

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter "<<n<< " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Original array : ";
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt0+=1;
        }
        else if(arr[i]==1){
            cnt1+=1;
        }
        else{
            cnt2+=1;
        }
    }
    for(int i=0;i<cnt0;i++){
        arr[i]=0;
    }

    for(int i=cnt0;i<cnt0+cnt1;i++){
        arr[i]=1;
    }

    for(int i=cnt0+cnt1;i<n;i++){
        arr[i]=2;
    }
    cout << "\nNew sorted array : ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// optimal approach using (DUTCH NATIONAL FLAG ALGORITHM)

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Array entered : \n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    int low=0,mid=0,high=n-1;

    for(int i=0;i<n;i++){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
    cout << "\nSorted array : \n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Moore's algorithm (Optimal solution)
// Majority element (> n/2 ) times 

#include <iostream>
using  namespace std;

int main(){
    int n;
    cout << "N : ";
    cin >>n;
    int arr[n];
    cout << "Enter "<< n  <<" elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    } 

    int cnt=0;
    int ele;

    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }
        else if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt --;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cnt1++;
        }
    }
    if(cnt1>n/2){
        cout << ele << " appeared "<< cnt1 << " times " << endl;
    }else{

        cout << "No elements appeared more than " << n/2 << " times";
    }

    return 0;


}

// Kadane's Algorithm 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "N : ";
    cin >>n;
    int arr[n];
    cout << "Enter "<< n  <<" elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    cout << "Max sub array : "<< maxi;

    return 0;


}