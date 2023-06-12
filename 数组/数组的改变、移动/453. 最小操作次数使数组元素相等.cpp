class Solution {
public:
    int minMoves(vector<int>& nums) {
        set<int> cnt;

        for (int i = 0; i < nums.size(); i ++) cnt.insert(nums[i]);

        int res = accumulate(nums.begin(), nums.end(), 0);

        return cnt.size() == 1 ? 0 : res / 2;
    }
};