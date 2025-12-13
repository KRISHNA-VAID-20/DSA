#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "N : ";
    cin >>n;
    vector<vector<int>> result;
    vector <int> temp;
    for(int i=1;i<=n;i++){
        int cnt=1;
        for(int j=1;j<=i;j++){
            temp.push_back(cnt);
            cnt=cnt*(i-j)/j;
        }
        result.push_back(temp);
        temp.clear();
    }
    return 0;
}