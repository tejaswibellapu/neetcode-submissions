class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> snum(n);
        for (int i = 0; i < n; i++) {
            snum[i] = {nums[i], i};
        }
        sort(snum.begin(), snum.end());
        int l = 0;
        int r = n - 1;
        while (l < r) {
            int csum = snum[l].first + snum[r].first;
            
            if (csum == target) {
                int idx1 = snum[l].second;
                int idx2 = snum[r].second;
                return {min(idx1, idx2), max(idx1, idx2)};
            }
            
            if (csum < target) l++; 
            else r--;
        }
        return {-1, -1};
    }
};
