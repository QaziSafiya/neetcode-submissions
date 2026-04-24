class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minPrice = INT_MAX;

for(int i=0;i<prices.size();i++){
    minPrice=min(minPrice,prices[i]);
    int profit=prices[i]-minPrice;
    maxprofit=max(profit,maxprofit);
}

return maxprofit;
    }
};
