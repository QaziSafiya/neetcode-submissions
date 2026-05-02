class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int>fl(flowerbed.size()+2,0);
        for(int i=0;i<flowerbed.size();i++){
            fl[i+1]=flowerbed[i];
        }
        for(int i=1;i<fl.size();i++){
            if(fl[i-1]==0 && fl[i]==0 &&fl[i+1]==0){
                fl[i]=1;
                n--;
            }
        }
return n<=0;
    }
};