#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter s : ";
    cin >> s;
    int cnt=0;
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]==')') cnt--;
        if(cnt!=0) ans.push_back(s[i]);
        if(s[i]=='(') cnt++;
    }
    cout << ans;
}