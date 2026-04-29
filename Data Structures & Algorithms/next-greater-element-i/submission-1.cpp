class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int>map;
      vector<int>res(nums1.size(),-1);
      for(int i=0;i<nums1.size();i++){
        map[nums1[i]]=i;

      }

      for(int i=0;i<nums2.size();i++){
        if(map.find(nums2[i])==map.end()){
            continue;
        }
         for(int j=i+1;j<nums2.size();j++){
            if(nums2[j]>nums2[i]){
                int index=map[nums2[i]];
                res[index]=nums2[j];
                break;
            }
         }
      }
      return res;
    }
};