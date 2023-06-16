class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //获取数组的长度
        int n = nums.size();
        //定义一个新的数组
        vector<int> newArr(n);
        //将原数组中移动后的数存进新的数组中
        for (int i = 0; i < n; ++i) 
            newArr[(i + k) % n] = nums[i];
        //将新数组的值拷贝到新数组中
        nums.assign(newArr.begin(), newArr.end());
    }
};
