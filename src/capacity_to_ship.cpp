class Solution {
public:
    bool canShip(int mid ,int n, vector<int>& nums){
        int days = 1;
        int sum=0;
        int sz = nums.size();
        for(int i=0 ; i < sz ; i++){

            if(sum + nums[i] > mid){
                days += 1;
                sum = nums[i];
            }
            else{
                sum += nums[i];
            }
        }
        return (days <= n);
        }



    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(begin(weights) , end(weights)) ;
        int r = accumulate(begin(weights) , end(weights),0);
        int ans = -1;

        while(l <= r){
            int m = l + ((r-l) >> 1);
            if(canShip(m , days, weights )){
                ans = m;
                r = m - 1;
            }
            else{
                l = m + 1;
            }

        }
        return ans;
    }
};