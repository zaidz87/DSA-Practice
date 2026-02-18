class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        for(auto x : nums){
            mp[x]++;
        }

        vector<pair<int , int>> vec;
        for(auto i : mp){
            vec.push_back({i.first,i.second});
        }

        sort(begin(vec),end(vec), [](auto &a , auto &b){
            return a.second > b.second;
        });

        vector<int> ans;

        for(int i = 0 ; i < k ; i++){
            ans.push_back(vec[i].first);
        }
        
        return ans;

    }
};