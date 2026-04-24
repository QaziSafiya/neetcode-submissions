class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
set<vector<int>>st;
for(int i=0;i<nums.size();i++){
    unordered_set<int>s;
    for(int j=i+1;j<nums.size();j++){
        int third = -(nums[i]+nums[j]);
        if(s.find(third)!=s.end()){
            vector<int>temp={nums[i],nums[j],third};
            sort(temp.begin(),temp.end());
            st.insert(temp);
        }
        s.insert(nums[j]);
    }
}
return vector<vector<int>>(st.begin(),st.end());
    }
};
