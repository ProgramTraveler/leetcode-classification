class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // ʱ�临�Ӷ� O(n)
        // set ����
        set<int> res;

        for (auto &n : nums) {
            res.insert(n);

            if (res.size() > 3) res.erase(res.begin()); // ɾ����һ����С��Ԫ��
        }

        // ���ڷ��ص�������� �����ڷ���������
        return res.size() == 3 ? *res.begin() : *res.rbegin(); // rbegin() ���������
    }
};