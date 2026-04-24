class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // if(nums.empty()) return 0;
        // sort(nums.begin(),nums.end());
        // int longest=1;
        // int count=1;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]+1){
        //         count++;
        //     }else if(nums[i]!=nums[i-1]){
        //         count=1;
        //     }
        //     longest=max(longest,count);
        // }
        // return longest;

        unordered_set<int>st(nums.begin(),nums.end());
        int longest=0;
        for(auto&num:nums){
if(st.find(num-1)==st.end()){
    int currNum=num;
    int count=1;

while(st.find(currNum+1)!=st.end()){
    currNum++;
    count++;
}
longest=max(longest,count);
        }
        }
        return longest;
    }
};
