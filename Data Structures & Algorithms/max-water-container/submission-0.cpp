class Solution {
public:
    int maxArea(vector<int>& heights) {
          vector<int> area;
          for(int i =0; i<heights.size(); i++){
            for(int j=i+1; j<heights.size(); j++){
                int water = min( heights[i] , heights[j])*(j-i);
                area.push_back(water);
                 
            }
          }
          return *max_element(area.begin(), area.end());
    }
};
