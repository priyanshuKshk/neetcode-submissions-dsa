class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
          set<vector<int>> st; 
        for(int i=0; i<nums.size(); i++){
            unordered_set<int> s;
            for(int j=i+1; j<nums.size(); j++){
                int needed = -nums[i]-nums[j];
                 if(s.find(needed) != s.end()){
                    vector<int> temp ={nums[i] ,nums[j] ,needed};
                sort(temp.begin() ,temp.end());
                st.insert(temp);

            }
            s.insert(nums[j]);
        
            }}
            return vector<vector<int>>(st.begin(), st.end());
        }
    
};
