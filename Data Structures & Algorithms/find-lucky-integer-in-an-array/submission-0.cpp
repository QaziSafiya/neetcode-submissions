class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count[1001]={0};
        int maxlucky=-1;
        for(auto &it:arr){
            count[it]++;
        }

for(int i=1;i<=1000;i++){
    if(count[i]==i){
        maxlucky=max(maxlucky,i);
    }
}
return maxlucky;

    }
};