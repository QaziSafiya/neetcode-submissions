class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


// using set

set<int>st(nums.begin(),nums.end());
 int i = 0;
    for (auto&it : st) {
        nums[i++] = it;
    }
return st.size();
        //  two pointer
        //   int n = nums.size();
        // if (n == 0) return 0;

        //   int j=0;
        //   for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=nums[j]){
        //         i++;
        //    nums[i] = nums[j];
        //     }
        //   }
        //   return i+1;
    }
};