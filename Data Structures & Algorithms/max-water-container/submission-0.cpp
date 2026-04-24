class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                int w=j-i;
                int h=min(heights[j],heights[i]);
                int area= w*h;
        maxarea=max(maxarea,area);
            }
        }
        return maxarea;
    }
};
