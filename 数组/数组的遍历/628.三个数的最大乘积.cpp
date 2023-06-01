class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size() - 1;

        int res1 = nums[n] * nums[n - 1] * nums[n - 2];
        // 注意负数
        int res2 = nums[n] * nums[0] *nums[1];

        return res1 > res2 ? res1 : res2;
    }
};