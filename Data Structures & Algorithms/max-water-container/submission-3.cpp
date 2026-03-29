class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea= 0;
        int left =0;
        int right =heights.size() -1;
        while(left<heights.size()-1){
            int area = min( heights[left] , heights[right])*(right-left);
            if(heights[left] <=heights[right]){
                left++;
            }
            else{
                right--;
            }
              if(area > maxArea){
                    maxArea = area;
                }
                 
            }
          return maxArea;

        }
    
};
