class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //   1 approch
    // int n=nums.size();
    // for(int i=0;i<k;i++){
    //     int last=nums[n-1];
    //     for(int j=n-1;j>0;j--){
    //         nums[j]=nums[j-1];
    //     }
    //     nums[0]=last;
    // }


    // 2 approch

    // int n=nums.size();
    // vector<int>temp(n);
    // for(int i=0;i<n;i++){
    //     temp[(i+k)%n]=nums[i];
    // }
    //    nums=temp;




    // 3 approch

    
        int n=nums.size();
        k=k%n;
     reverse(nums.begin(),nums.end());
          reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());
    }
};