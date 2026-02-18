class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int sz = nums.size();
        int tot = accumulate(begin(nums),end(nums),0);
        int curr_sum = 0;

        for(int i = 0 ; i < tot ; i++){
            curr_sum += nums[i];
        }

        int ans = tot-curr_sum;

        for(int i = 1 ; i < sz ; i++){
            int window_end = (i + tot - 1) % sz;
            int window_start = i - 1;

            curr_sum += nums[window_end];
            curr_sum -= nums[window_start];
            ans = min(ans , tot-curr_sum);
        }

        return ans;

    }
};