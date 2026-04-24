class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>map;
       int res=0;
       int maxcount=0;
       
       for(auto&it:nums){
        map[it]++;
        if(map[it]>maxcount){
            res=it;
            maxcount=map[it];
        }
       } 
       return res;
    }
};