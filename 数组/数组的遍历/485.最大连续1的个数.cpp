class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int idx = 0, n = nums.size();

        int res = INT_MIN, cnt = 0;

        while (idx < n) {
            if (nums[idx] == 1) cnt ++;

            else res = max(res, cnt), cnt = 0;

            idx ++;

        }
        res = max(res, cnt);

        return res;
    }
};