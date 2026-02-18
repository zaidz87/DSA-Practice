class Solution {
public:
    bool canEat(vector<int>& piles , int mid , int h){
        long long hour = 0;
        for(int p : piles){
            hour += (p + mid - 1) / mid;
        } 
        return (hour <= h);
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(begin(piles) , end(piles));
        int ans = -1;

        while(left <= right){
            int mid = left + ((right - left) >> 1);
            if(canEat(piles , mid , h)){
                ans = mid;
                right = mid - 1;

            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};