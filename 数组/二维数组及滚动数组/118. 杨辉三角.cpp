class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        int idx = 0;

        vector<int> tem;

        tem.emplace_back(1);

        res.emplace_back(tem);

        while (idx < numRows - 1) {

            tem.clear();

            tem.emplace_back(1);

            for (int i = 1; i < res[idx].size(); i ++) {
                tem.emplace_back(res[idx][i] + res[idx][i - 1]);
            }

            tem.emplace_back(1);

            res.emplace_back(tem);

            idx ++;
        }

        return res;
    }
};