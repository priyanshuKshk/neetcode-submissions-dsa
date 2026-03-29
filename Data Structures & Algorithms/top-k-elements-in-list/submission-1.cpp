class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count =1;
        vector<pair<int,int>> v;
          for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                count++;
            } else {
                v.push_back({nums[i-1], count});
                count = 1;
            }
        }
          v.push_back({nums.back(), count});

        // Step 3: sort by frequency descending
        sort(v.begin(), v.end(), [](auto a, auto b){
            return a.second > b.second;
        });

        // Step 4: take top k
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};
