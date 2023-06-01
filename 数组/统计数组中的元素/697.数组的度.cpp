class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> cnt; // ���ֳ��ֵĴ���
        unordered_map<int, vector<int>> al; // ���ֳ��ֵ��±�

        for (int i = 0; i < nums.size(); i ++) cnt[nums[i]] ++, al[nums[i]].emplace_back(i);

        int res = INT_MAX;

        int idx = INT_MIN;

        for (auto &[k ,v] : cnt) idx = max(idx, v);

        for (auto &[k, v] : cnt) {
            if (v == idx) {
                auto vec = al[k];

                res = min(res, vec[vec.size() - 1] - vec[0] + 1);
            }
        }
        
        return res;
    }
};