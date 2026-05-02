class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax=nums[0];
        int currMin=nums[0];
        int maxproduct=nums[0];

        for(int i=1;i<nums.size();i++){
            int num=nums[i];
            int tempMax=currMax;
            currMax=max({num,currMax*num,currMin*num});
            currMin=min({num,tempMax*num , currMin*num});

            maxproduct=max(maxproduct,currMax);
        }
        return maxproduct;
    }
};
