class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
    
    int n = temps.size();
    vector<int> ans(n, 0);
    stack<int> st;   // store indices
    
    for(int i = 0; i < n; i++){
        
        while(!st.empty() && temps[i] > temps[st.top()]){
            int idx = st.top();
            st.pop();
            ans[idx] = i - idx;   // distance
        }
        
        st.push(i);
    }
    
    return ans;
}

};