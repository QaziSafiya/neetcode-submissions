class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=0;i<numRows;i++){
            vector<int>row;
            row.push_back(1);
            int val=1;
            for(int k=1;k<=i;k++){
                 val = val * (i- k + 1) / k;
                 row.push_back(val);
            }
            result.push_back(row);
        }

return result;

    }
};