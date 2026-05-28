class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        // for(int i=0;i<heights.size();i++){
        //     for(int j=i+1;j<heights.size();j++){
        //         int width=j-i;
        //         int height=min(heights[j],heights[i]);
        //         int area=width*height;
        //         maxarea=max(maxarea,area);
        //     }
        // }
        // return maxarea;


        //  using two pointer approch;

        int left=0;
        int right=heights.size()-1;
        while(left<right){
            int w=right-left;
            int h=min(heights[right],heights[left]);
            int area=w*h;
            maxarea=max(maxarea,area);
            if(heights[left]<heights[right]){
                left++;
                
            }else{
                right--;
            }
        }
        return maxarea;
    }
};
