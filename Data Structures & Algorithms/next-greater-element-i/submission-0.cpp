class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(auto &num:nums1){
            int NextGreater=-1;
            for(int i=nums2.size()-1;i>=0;i--){
                if(nums2[i]>num){
                  NextGreater=nums2[i];  
                }else if(nums2[i]==num){
                    break;
                }
            }
            res.push_back(NextGreater);
        }
        return res;
    }
};