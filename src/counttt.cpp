class Solution {
public:
    long long countt(vector<int> &nums , int X){
        int left = 0;
        int right = nums.size()-1;
        long long count = 0;
        while(left < right){
            if((long long) nums[left] + nums[right] <= X){
                count += (right-left);
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(begin(nums),end(nums));
        long long lowercount = countt(nums,lower-1);
        long long uppercount = countt(nums, upper);

        return uppercount - lowercount;
    }
};