class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) { // ��������ô�� ��һ�±�����
        // �ǵݼ�����
        int res = 0;

        t.emplace_back(1e7 + 1); // ������������һ���ڵ�

        int n = t.size();

        for (int i = 0; i < n - 1; i ++) {
            /*
                �޷Ǿ��������
                    1.�ж�����ʱ�� ����һ�ο�ʼʱ��֮ǰ
                    2.�ж�����ʱ�� ������һ�ο�ʼʱ��
                    3.�ж�����ʱ�� �պ�����һ�ο�ʼʱ��
            */
            if (t[i] + d - 1  < t[i + 1]) res += d;

            if (t[i] + d - 1 >= t[i + 1]) res += (t[i + 1] - t[i]);
            
        }

        return res;
    }
};