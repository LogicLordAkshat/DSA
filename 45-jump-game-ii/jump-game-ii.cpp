class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, far = 0, curr = 0;
        for (int i = 0, n = nums.size() - 1; i < n; ++i) {
            far = max(far, i + nums[i]);
            if (i == curr) {
                curr = far;
                ++jumps;
            }
        }
        return jumps;
    }
};