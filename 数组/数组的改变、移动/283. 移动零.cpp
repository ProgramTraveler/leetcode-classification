class Solution {
public:
    void moveZeroes(vector<int>& nums) { // 双指针
        int left = 0, right = 0;
        while (right < nums.size()) {
            if (nums[right] != 0) { //当前元素非0
                swap(nums[left], nums[right]); //交换左右两指针的数
                left ++;
            }
            right ++;
        }
    }
};