class Solution {
public:
    bool feasible(vector<int>& nums , int k , int mid){
        int parts = 1;
        int cursum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            cursum += nums[i];
            if(cursum > mid){
                cursum = nums[i];
                parts += 1;
            }
        }
        return (parts <= k);
    }
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(),nums.end());
        int right = accumulate(begin(nums),end(nums),0);
        int ans = INT_MAX;
        while(left <= right){
            int mid = left + ((right - left)>>1);
            if(feasible(nums ,k , mid)){
                ans = min(ans , mid);
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};