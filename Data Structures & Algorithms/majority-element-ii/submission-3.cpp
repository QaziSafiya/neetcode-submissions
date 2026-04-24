class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // vector<int> ans;
        // int n = nums.size();
        // // count frequency
        // for(int i = 0; i < n; i++){
        //     mp[nums[i]]++;
        // }
        // // check > n/3
        // for(auto it : mp){
        //     if(it.second > n/3){
        //         ans.push_back(it.first);
        //     }
        // }

        // return ans;

        int count1=0;
        int count2=0;
        int candidate1=0;
        int candidate2=0;
 for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
            else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            }
            else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }
count1 = count2 = 0;
        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        vector<int> ans;
        if (count1 > nums.size()/3) ans.push_back(candidate1);
        if (count2 > nums.size()/3) ans.push_back(candidate2);

        return ans;



    }
};