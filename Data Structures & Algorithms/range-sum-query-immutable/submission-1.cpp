class NumArray {
    private:
    // const vector<int>& nums;
     vector<int> prefix;
public:
    NumArray(vector<int>& nums){
   prefix=vector<int>(nums.size()+1,0);
for (int i = 0; i < nums.size(); i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }


    }
    
    int sumRange(int left, int right) {
        // int res=0;
        // for(int i=left; i<=right;i++){
        //     res=res+nums[i];
        // }
        // return res;
        return prefix[right+1]-prefix[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */