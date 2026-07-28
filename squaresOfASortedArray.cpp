class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sz = nums.size();
        vector<int> ans(sz);

        for(int i = 0; i < sz; i++) {
            ans[i] = nums[i] * nums[i];
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};