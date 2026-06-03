class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
//  frequency array

vector<int>freq(1001,0);
vector<int>res;
for(auto num:nums1){
    freq[num]=1;
}
for(auto &num:nums2){
    if(freq[num]==1){
        res.push_back(num);
        freq[num]=0;
    }
}
return res;

    }
};