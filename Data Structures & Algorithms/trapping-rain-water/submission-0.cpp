class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }

        int l = 0, r = height.size() - 1;
        int left = height[l], right = height[r];
        int area = 0;
        while (l < r) {
            if (left < right) {
                l++;
                left = max(left, height[l]);
                area += left - height[l];
            } else {
                r--;
                right= max(right, height[r]);
                area += right - height[r];
            }
        }
        return area;
    }
};