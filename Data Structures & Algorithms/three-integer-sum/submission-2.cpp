class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int k = 0; k < nums.size(); k++){

            // skip duplicates
            if(k > 0 && nums[k] == nums[k-1]) continue;

            int left = k + 1;
            int right = nums.size() - 1;

            while(left < right){
                int sum = nums[k] + nums[left] + nums[right];

                if(sum == 0){
                    ans.push_back({nums[k], nums[left], nums[right]});
                    left++;
                    right--;

                    // skip duplicates
                    while(left < right && nums[left] == nums[left-1]) left++;
                    while(left < right && nums[right] == nums[right+1]) right--;
                }
                else if(sum < 0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        return ans;
    }
};