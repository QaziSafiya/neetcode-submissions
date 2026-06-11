class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                int w=j-i;
               int minheight=min(heights[i],heights[j]);
                int area=w*minheight;
                maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};
