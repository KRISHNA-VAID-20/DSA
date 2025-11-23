// // 1 Largest element in array 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int max,min;
    max=min=arr1[0];
    for(int i=0;i<n;i++){
        if(arr1[i]>max){
            max=arr1[i];
        }
        if(arr1[i]<min){
            min=arr1[i];
        }
    }
    cout << "Max : " << max;
    cout << "\nMin : " << min;
    return 0;

}

// // 2 Second largest element
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >>n;
    int arr[n];
    cout << "Enter " << n << " Elements : ";
    for(int  i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=arr[0];
    int sl=-1;
    for(int i=1;i<n;i++){
        if(arr[i]> max ){
            sl=max;
            max=arr[i];
        }
        else if(arr[i] < max && arr[i] > sl){
            sl =arr[i];
        }
    }
    cout << "Max : " << max << endl;
    cout << "2nd Max : " << sl;
    return 0;
}

// //2nd smallest + smallestt

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int smallest=arr1[0];
    int ssmallest=100000;
    for(int i=1;i<n;i++){
        if(arr1[i] < smallest){
            ssmallest=smallest;
            smallest=arr1[i];
        }
        else if(arr1[i] > smallest && arr1[i] < ssmallest){
            ssmallest=arr1[i];
        }
    }
    cout << "Smallest : " << smallest;
    cout << "\nSecond Smallest : " << ssmallest;
    return 0;
}

// //3 check array is sorted ??

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int is_sorted=1;
    for(int i=1;i<n;i++){
        if(arr1[i]>=arr1[i-1]){
        }
        else{
            is_sorted=0;
        }
    }
    if(is_sorted==0){
        cout << "not sorted Array ";
    }
    else{
        cout << "Sorted";
    }
    return 0;

}

// //4 Remove duplicates from array [ Optimal approach]

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(arr1[i] != arr1[j]){
            arr1[i+1]=arr1[j];
            i++;
        }
    }
    i=i+1;
    cout << "Unique elements : " << i;
    return 0;
}

// //using set 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    cout << "Array Entered : ";
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }
    set <int > st ;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    cout <<"\nNew array : ";
    for(auto it : st){
        cout  <<  it << " ";
    }
    return 0;

}

// //5 - Left rotate by one place 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int temp=arr1[0];
    for(int i=1;i<n;i++){
        arr1[i-1]=arr1[i];
    }
    arr1[n-1]=temp;
    cout << "New Array : ";
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }
    return 0;
}

// //6 Left (right) rotate by D places (optimal approach)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >>n;
    int arr[n];
    cout << "Enter "<<n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter k : ";
    cin >> k;
    k=k%n;
    // reverse(arr,arr+n); // for right roattaion
    // reverse(arr,arr+k);
    // reverse(arr+k,arr+n);
    reverse(arr,arr+k); // for left roattaion
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
    cout << "Roatated by "<< k << " places : "<<endl;
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    return 0;
}



//7-  move all zeroes to end 

// Brute force

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin>> n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    vector <int> temp;
    for(int i=0;i<n;i++){
        if(arr1[i]!=0){
            temp.push_back(arr1[i]);
        }
    }
    int nonz=temp.size();
    for(int i=0;i<nonz;i++){
        arr1[i]=temp[i];
    }
    cout << "New array : ";
    for(int i=nonz;i<n;i++){
        arr1[i] =0;
    }
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }

    return 0;
}

// OPTIMAL APPROACH FOR SAME QUESTION 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin>> n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr1[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr1[i]!=0){
            swap(arr1[i],arr1[j]);
            j++;
        }
    }
    cout << "New array : ";
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }

    return 0;
}

// Linear Search 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >>n;
    int arr1[n];
    cout << "Enter " << n << " elements : ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int key;
    cout << "Enter number to search : ";
    cin >> key;
    for(int i=0;i<n;i++){
        if(arr1[i]==key){
            cout << "Element "<< key << " found at index : "<< i;
            break;
        }
        else{
            cout << key << " Not found ";
            return -1;
        }
    }
    return 0;
}

// UNION of two sorted arrays  [ BRUTE FORCE ]

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout << "Enter n1 : ";
    cin >> n1;
    int arr1[n1];
    cout <<"Array 1 - " <<"Enter "<< n1 << " elements : ";
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout << "Enter n2 : ";
    cin >> n2;
    int arr2[n2];
    cout <<"Array 2 - " <<"Enter "<< n2 << " elements : ";
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    set <int> st;

    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    int arr3[st.size()];
    int i =0;
    for(auto it : st){
        arr3[i++]=it;
    }

    cout << "Union of Both : " ;
    for(i=0;i<st.size();i++){
        cout << arr3[i] << " ";
    }
 
}

// // Optimal approach

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout << "Enter n1 : ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter "<< n1 << " elements : ";
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout << "Enter n2 : ";
    cin >> n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    vector <int > unionarray;
    int i=0;
    int j=0;
    while(i<n1 && j <n2){
        if(arr1[i]<= arr2[j]){
            if(unionarray.size()==0 || unionarray.back()!=arr1[i]){
                unionarray.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionarray.size()==0 || unionarray.back()!=arr2[j]){
                unionarray.push_back(arr2[j]);
        }
        j++;
    }
    }
    while(j<n2){
        if(unionarray.size()==0 || unionarray.back()!=arr2[j]){
            unionarray.push_back(arr2[j]);
    }
        j++;
    }

    while(i<n1){
        if(unionarray.size()==0 || unionarray.back()!=arr1[i]){
            unionarray.push_back(arr1[i]);
    }
        i++;
    }
    cout << "Union Array : ";
    for(auto it : unionarray){
        cout << it << " ";
    }
    
    return 0;

}

// INTERSECTION PROBLEM 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout << "Enter n1 : ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter "<< n1 << " elements : ";
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout << "Enter n2 : ";
    cin >> n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }

    vector <int > inter;
    int i=0;
    int j=0;

    while(i< n1 && j <n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]< arr1[i]){
            j++;
        }
        else{
            inter.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout << "Intersection : ";
    for(auto it : inter){

        cout << it << " ";
    }
    return 0;

}

// Q - Find missing number from array

// Brute force

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n-1];
    cout << "Enter "<< n-1 << " values : ";
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j] ==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout <<  "\nMissing value : "<< i;
        }
    }

    return 0;


}

// OPTIMAL APPROACH 

#include <iostream>
using namespace std;

int main(){
    int n,sum,s;
    cout <<  "Enter n : ";
    cin >> n;
    int arr[n-1]; // Becuase we are  finding one missing value in array
    cout << "Enter " << n-1 << " elements : ";
    for(int i=0;i<n-1;i++){ // n-1 coz we finding 1 missing value only
        cin >> arr[i];
    }
    sum=n*(n+1)/2;
    s=0;
    for(int i=0;i<n-1;i++){
        s+=arr[i];
    }
    int result =sum-s;
    cout << "Mising Value = " << result;
    return 0;
    
}

// Q Max Consecutive ones

 // No brute force direct Optimal Approach 

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
    int count =0;
    int maximum=0;
    for(int i=0;i<n;i++){
        if (arr[i] ==1){
            count +=1;
            maximum=max(maximum,count); // max used to retuen maximum num between maximum and count 
        }
        else{
            count =0;
        }
    }
    cout << "Max consecutive ones : " << maximum;
    return 0;

}

// Number that appears only once
// Brute Force

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter "<<n <<" elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    } 
    cout << "Entered elements : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    for(int i=0;i<n;i++){
        int num= arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count +=1;
            }
        }
        if(count ==1){
            cout <<"\nAppeared once : " <<arr[i] ;
        }
    }
    return 0;
}

// Better way -> Using Hashing

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter "<<n <<" elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    } 
    cout << "Entered elements : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int hash[maxi]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            cout << "\nAppeared once : "<<arr[i];
        }
    }
    return 0;
}

// Optimal Approach Using Xor

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter "<<n <<" elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    } 
    cout << "Entered elements : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    int Xor=0;
    for(int i=0;i<n;i++){
        Xor=Xor^arr[i];
    }
    cout << "\nAppeared once : "<<Xor;
    return 0;
}
