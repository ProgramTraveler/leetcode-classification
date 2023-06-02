class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>cnt;

        vector<int> res;

        for (auto &n : nums) {
            cnt[n] ++;

            if (cnt[n] >= 2) res.push_back(n);
        }

        return res;
    }
};