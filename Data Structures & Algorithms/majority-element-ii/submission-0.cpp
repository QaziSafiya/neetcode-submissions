class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();

        // count frequency
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        // check > n/3
        for(auto it : mp){
            if(it.second > n/3){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};