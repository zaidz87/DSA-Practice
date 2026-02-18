class Solution {
public:
    bool canDiv(vector<int>& n , int mid , int t){
        long long calc = 0;
        for(int i : n){
            calc += (i + mid - 1) / mid;
        }
        return (calc <= t);
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(begin(nums),end(nums));
        int ans = 0;

        while(left <= right){
            int mid = left + ((right - left)>>1);
            if(canDiv(nums , mid , threshold)){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid +1;
            }
        }
        return ans;
    }
};