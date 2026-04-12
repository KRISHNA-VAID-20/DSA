#include <bits/stdc++.h>
using namespace std;

int searchX(vector <int>& arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        
        else if(target>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}


int main(){
    int n,target;
    cout << "Enter n : ";
    cin >> n;
    vector <int> arr(n);

    cout << "Enter " << n << " elements : ";

    for(auto &x:arr){
        cin >> x ;
    }

    cout << "Elements entered :  \n";

    for(auto &x:arr){
        cout << x << " ";
    }

    cout << "\nEnter target element : ";
    cin >> target;

    int result= searchX(arr,target);
    cout << arr[result] << " found at index : "<< result;


    return 0;



}