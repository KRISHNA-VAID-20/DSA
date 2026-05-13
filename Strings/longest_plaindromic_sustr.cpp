// class Solution {
// public:
//     string longestPalindrome(string s) {

//         if(s.empty()) return "";

//         string t = "^";

//         for(char c : s) {
//             t += "#";
//             t += c;
//         }

//         t += "#$";

//         int n = t.length();

//         vector<int> p(n, 0);

//         int center = 0;
//         int right = 0;

//         for(int i = 1; i < n - 1; i++) {

//             int mirror = 2 * center - i;

//             if(i < right)
//                 p[i] = min(right - i, p[mirror]);

//             while(t[i + 1 + p[i]] == t[i - 1 - p[i]]) {
//                 p[i]++;
//             }

//             if(i + p[i] > right) {
//                 center = i;
//                 right = i + p[i];
//             }
//         }

//         int maxLen = 0;
//         int centerIndex = 0;

//         for(int i = 1; i < n - 1; i++) {
//             if(p[i] > maxLen) {
//                 maxLen = p[i];
//                 centerIndex = i;
//             }
//         }

//         int start = (centerIndex - maxLen) / 2;

//         return s.substr(start, maxLen);
//     }
// };