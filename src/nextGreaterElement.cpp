class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        
        stack<int> s;
        vector<int> nge(10001, -1);

        for(int i = 0 ;i < sz2 ; i++){

            while(!s.empty() && nums2[i] > nums2[s.top()]){
                int ind = s.top();
                s.pop();
                int ele = nums2[ind];
                nge[ele] = nums2[i];

            }
            s.push(i);
        }

        vector<int>ans(sz1,-1);
        for(int i = 0 ; i < sz1;i++){
            int qkey = nums1[i];
            ans[i] = nge[qkey];
            
        }
        return ans;
    }
};