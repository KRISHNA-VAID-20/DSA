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

// to print the subarray also
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
    int start,ansstart,ansend;
    for(int i=0;i<n;i++){
        if(sum==0) start=i;
        
        sum+=arr[i];

        if(sum>maxi){
            maxi=sum;
            ansstart=start;
            ansend=i;

        }

        if(sum<0){
            sum=0;
        }
    }
    cout << "Max sub array : "<< maxi;
    cout << "\nMax sub array is from index : "<< "[" << ansstart <<"," << ansend << "]";

    return 0;


}

// Best time to buy and sell stocks 

#include <iostream>
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

    int mini=arr[0];
    int profit=0;

    for(int i=1;i<n;i++){
        int cost=arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);
    }
    cout << "profit = " << profit;

    return 0;
}


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

    vector <int> tot(n,0);

    int pos=0;
    int neg=1;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            tot[neg]=arr[i];
            neg+=2;

        }
        else{
            tot[pos]=arr[i];
            pos+=2;
        }
    }

    cout << "New array : ";
    for(auto it: tot){
        cout << it << " ";
    }

    return 0;
}

// Next permutation { better soln using inbuilt stl function}

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector <int> arr={3,2,1};

    next_permutation(arr.begin(),arr.end());
    for(auto it : arr){
        cout << it;
    }
    return 0;
}


// (Better solution)  

//   int n= nums.size();
//         int index=-1;

//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 index=i;
//                 break;
//             }
//         }
//         if(index==-1){
//             reverse(nums.begin(),nums.end());
//             return ;
//         }

//         for(int i=n-1;i>index;i--){
//             if(nums[i]>nums[index]){
//                 swap(nums[i],nums[index]);
//                 break;
//             }

//         }

//         reverse(nums.begin()+ index+1,nums.end());
//         return ;



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
    vector <int> leaders;


    int maxright=arr[n-1];
    leaders.push_back(maxright);

    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxright){
            leaders.push_back(arr[i]);
            maxright=arr[i];
        }
    }
    reverse(leaders.begin(),leaders.end());
    cout << "Leaders : ";
    for(auto it : leaders){
        cout << it << " ";
    }
    return 0;
}