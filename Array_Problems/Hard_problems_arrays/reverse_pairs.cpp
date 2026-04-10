// class Solution {
// public:
//     int reversePairs(vector<int>& nums) {
//         return mergeSort(nums, 0, nums.size() - 1);
//     }

//     int mergeSort(vector<int>& a, int l, int r) {
//         if (l >= r) return 0;

//         int m = (l + r) / 2;
//         int cnt = mergeSort(a, l, m) + mergeSort(a, m + 1, r);

//         int j = m + 1;
//         for (int i = l; i <= m; i++) {
//             while (j <= r && (long long)a[i] > 2LL * a[j]) j++;
//             cnt += j - (m + 1);
//         }

//         vector<int> t;
//         int i = l; j = m + 1;

//         while (i <= m && j <= r)
//             t.push_back(a[i] <= a[j] ? a[i++] : a[j++]);

//         while (i <= m) t.push_back(a[i++]);
//         while (j <= r) t.push_back(a[j++]);

//         for (int k = 0; k < t.size(); k++)
//             a[l + k] = t[k];

//         return cnt;
//     }
// };