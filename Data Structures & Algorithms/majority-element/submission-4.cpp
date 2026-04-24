class Solution {
public:
    int majorityElement(vector<int>& nums) {
int n=nums.size();
int count=1;
sort(nums.begin(),nums.end());
for(int i=1;i<nums.size();i++){
    if(nums[i]==nums[i-1]){
        count++;
    }else{
        count=1;
    }
    if(count>n/2){
return nums[i];
}
}

return nums[0];



    //    unordered_map<int,int>map;
    //    int res=0;
    //    int maxcount=0;
       
    //    for(auto&it:nums){
    //     map[it]++;
    //     if(map[it]>maxcount){
    //         res=it;
    //         maxcount=map[it];
    //     }
    //    } 
    //    return res;

    //  second approch

// int n=nums.size();
//     for(auto&it:nums){
//         map[it]++;
//     }
//     for(auto&num:map){
//         if(num.second > n/2){
//             return num.first;
//         }
//     }
//     return -1;
    }
};