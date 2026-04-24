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

        // unordered_map<int,int>map;
        // for(int i=0;i<nums.size();i++){
        //     int res=target-nums[i];
        //     if(map.find(res)!=map.end()){
        //         return {map[res],i}
        //     }
        //     map[nums[i]]=i;
        // }
        // return {};


        //  third approch (two pointer approch)


        vector<pair<int,int>>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
int left=0;
int right=nums.size()-1;

while(left<right){
    int sum = arr[left].first+arr[right].first;
    if(sum==target){
        int first = arr[left].second;
        int second = arr[right].second;
        return {min(first, second), max(first, second)};
    }
    else if(sum < target){
        left++;
    }
    else{
        right--;
    }
}



return {};


    }
};