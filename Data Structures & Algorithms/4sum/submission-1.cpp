class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        set<vector<int>>st;

for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        unordered_set<long long>s;
        for(int k=j+1;k<nums.size();k++){
           long long sum= (long long)target-(nums[i]+nums[j]+nums[k]);
            if(s.find(sum)!=s.end()){
                vector<int>temp={nums[i],nums[j],nums[k],(int)sum};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            s.insert(nums[k]);
        }
    }
}

        return vector<vector<int>>(st.begin(), st.end());

    }
};