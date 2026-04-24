class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int ,int>freq;
        vector<int>res;
        for(auto&it:nums){
            freq[it]++;
        }
        vector<pair<int,int>>v(freq.begin(),freq.end());
        sort(v.begin(),v.end(), [](auto&a , auto&b){ return a.second>b.second;
        });

        for(int i=0;i<k;i++){
            res.push_back(v[i].first);
        }
        return res;
    }
};