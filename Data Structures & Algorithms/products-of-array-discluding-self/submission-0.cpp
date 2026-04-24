class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

// vector<int>ans(nums.size());
// for(int i=0;i<nums.size();i++){
//     int product=1;
//     for(int j=0;j<nums.size();j++){
//         if(i!=j) product=product*nums[j];
//     }
//     ans[i]=product;
// }

// return ans;


//  2nd approch (suffix and prefix product)
vector<int>ans(nums.size(),1);
int prefix=1;
for(int i=0;i<nums.size();i++){
    ans[i]=prefix;
    prefix=prefix*nums[i];
}

int suffix=1;
for(int i=nums.size()-1;i>=0;i--){
    ans[i]=ans[i]*suffix;
   suffix=suffix*nums[i];
}
return ans;
    }
};
