class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=0;i<numRows;i++){
vector<int>row;
int val=1;
row.push_back(1);
for(int j=1;j<=i;j++){
    val = val *(i-j+1)/j;
    row.push_back(val);
}
 result.push_back(row);
        }
       
        return result;
    }
};