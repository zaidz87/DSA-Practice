class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int tot = accumulate(nums.begin(),nums.end(),0);
        int target = tot - x;
        int sum = 0;
        int left = 0;
        int maxlen = -1;

        for(int r = 0; r < n ; r++){
            sum += nums[r];
            while(left <= r && sum > target){
                sum -= nums[left];
                left++;
            }
            if(sum == target){
                maxlen = max(maxlen , r - left + 1);
            }
        }

        if(maxlen < 0) return -1;

        return n-maxlen;
    }
};