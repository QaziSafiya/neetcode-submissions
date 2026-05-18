class Solution {
   public:
    int maxAscendingSum(vector<int>& nums) {
        int maxsum = nums[0];
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                sum = 0;
            }
            sum = sum + nums[i];
            maxsum = max(maxsum, sum);
        }

        return maxsum;
    }
};