class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int countZero = 0;
        int maxlen = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0) {
                countZero++;
            }
            while (countZero > k) {
                if(nums[left] == 0) countZero--;
                left++;
            }
            maxlen = max(maxlen , r - left + 1);
        }
        return maxlen;
    }
};