class Solution {
public:
    bool canBe(vector<int>& b , int mid ,int m ,int k ){
        int consecutive=0;
        int bouq = 0;
        for(int i = 0 ; i < b.size() ; i++){
            if(b[i] <= mid){
                consecutive++;
                if(consecutive == k){
                    bouq += 1;
                    consecutive = 0;
                }
            }else{
                consecutive = 0;
            }
            
        }
        return bouq >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int left = 1;
        int right = *max_element(begin(bloomDay) , end(bloomDay));
        int ans = -1;


        while(left <= right){
            int mid = left + ((right - left)>>1);
            if(canBe(bloomDay , mid , m , k)){
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