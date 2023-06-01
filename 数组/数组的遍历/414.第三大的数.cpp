class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // 时间复杂度 O(n)
        // set 属性
        set<int> res;

        for (auto &n : nums) {
            res.insert(n);

            if (res.size() > 3) res.erase(res.begin()); // 删除第一个最小的元素
        }

        // 存在返回第三大的数 不存在返回最大的数
        return res.size() == 3 ? *res.begin() : *res.rbegin(); // rbegin() 反向迭代器
    }
};