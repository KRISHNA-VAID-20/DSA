// class Solution {
// public:

//     static bool cmp(pair<char,int> a, pair<char,int> b) {
//         return a.second > b.second;
//     }
//     string frequencySort(string s) {
//         unordered_map<char,int> mp;

//         for(int i=0;i<s.length();i++){
//             mp[s[i]]++;
//         }

//         vector<pair<char,int>> vec;
        
//         for(auto it: mp){
//             vec.push_back({it.first,it.second});    
//         }

//         sort(vec.begin(),vec.end(),cmp);

//         string ans="";

//         for(int i=0;i<vec.size();i++){
//             char ch=vec[i].first;
//             int freq=vec[i].second;

//             while(freq--){
//                 ans+=ch;
//             }
//         }

//         return ans;
//     }
// };