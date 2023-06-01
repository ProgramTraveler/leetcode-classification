class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) { // 懒得敲那么长 改一下变量名
        // 非递减数组
        int res = 0;

        t.emplace_back(1e7 + 1); // 方便遍历到最后一个节点

        int n = t.size();

        for (int i = 0; i < n - 1; i ++) {
            /*
                无非就三种情况
                    1.中毒结束时间 在下一次开始时间之前
                    2.中毒结束时间 包含下一次开始时间
                    3.中毒结束时间 刚好是下一次开始时间
            */
            if (t[i] + d - 1  < t[i + 1]) res += d;

            if (t[i] + d - 1 >= t[i + 1]) res += (t[i + 1] - t[i]);
            
        }

        return res;
    }
};