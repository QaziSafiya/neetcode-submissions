class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //    for(int j=i+1;j<nums.size();j++){
        //      int sum =nums[i]+nums[j];
        //     if(sum==target){
        //         return {i,j};
        //     }
        //    }
        // }
        // return {};

        // second approch

        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int res=target-nums[i];
            if(map.find(res)!=map.end()){
                return {map[res],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};