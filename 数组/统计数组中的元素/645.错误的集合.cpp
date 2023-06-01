class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> cnt; // 记录出现的次数
        vector<int> res(2, -1);

        int n = nums.size();

        for (int i = 0; i < n; i ++) cnt[nums[i]] ++;
        
        for (int i = 1; i <= n; i ++) {
            if (cnt[i] == 2) res[0] = i;

            if (cnt[i] == 0) res[1] = i;
        }

        return res;        
    }
};