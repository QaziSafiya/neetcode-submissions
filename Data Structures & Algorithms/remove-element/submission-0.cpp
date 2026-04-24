class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        for(auto&it:nums){
            if(it!=val){
                ans.push_back(it);
            }
        }
        for(int i=0;i<ans.size();i++){
nums[i]=ans[i];
        }
        return ans.size();
    }
};