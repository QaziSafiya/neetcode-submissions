class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int leftsum=0;
            for(int left=0;left<=i-1;left++){
                leftsum +=nums[left];
            }
           int rightsum=0;
           for(int right=i+1;right<nums.size();right++){
rightsum+=nums[right];
           } 
           if(leftsum==rightsum){
            return i;
           }
        }
        return -1;
    }
};