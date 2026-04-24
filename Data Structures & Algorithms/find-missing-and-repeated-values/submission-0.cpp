class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>st;
        int n=grid.size();
        int repeating=0;
        int missing=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(st.count(grid[i][j])){
repeating=grid[i][j];
                }
                st.insert(grid[i][j]);

            }
        }

        for(int num=1;num<=n*n;num++){
if(!st.count(num)){
    missing=num;
}
        }
        return {repeating,missing};
    }
};