class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=-1;
        int sum=0;
        for(int j=0;j<nums.size();j++){
            sum=sum+nums[j];
            int res=sum%k;
            if(map.find(res)!=map.end()){
       int i=map[res];
       if(j-i>1){
        return true;
       }
       }else{
         map[res]=j;
       }

            
           
        }
        return false;
    }
};