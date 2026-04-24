class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());

int count0=0;
int count1=0;
int count2=0;
for(int i=0;i<nums.size();i++){
    if(nums[i]==0) {
        count0++;
    }else if(nums[i]==1){
        count1++;
    }else count2++;
}

int i=0;
while(count0--){
    nums[i++]=0;
}
while(count1--){
    nums[i++]=1;
}
while(count2--){
    nums[i++]=2;
}
        // second approch
// int low=0;
// int mid=0;
// int high=nums.size()-1;
// while(mid<=high){
//     if(nums[mid]==0){
//         swap(nums[low],nums[mid]);
//         low++;
//         mid++;
//     }else if(nums[mid]==1){
//         mid++;
//     }else{
//         swap(nums[high--] , nums[mid]);
//     }

// }

    }
};