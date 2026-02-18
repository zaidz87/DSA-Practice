class Solution {
public:
    int mySqrt(int x) {
        long left = 0;
        long right = x;
        int ans = -1;
        while(left <= right){
            long mid = left + (right - left) /2;

            long mul = mid * mid;
            if(mul < x){
                left = mid+1;
                ans = mid;
            }
            else if(mul > x){
                right = mid - 1;
            }
            else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
};