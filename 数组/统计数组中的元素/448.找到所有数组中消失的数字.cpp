class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // 似乎做过了
        unordered_map<int, int>cnt;

        for (auto &n : nums) cnt[n] ++;

        int n = nums.size();

        vector<int> res;

        for (int i = 1; i <= n; i ++) {
            if (cnt[i] == 0) res.emplace_back(i);
        }

        return res;
    }
};