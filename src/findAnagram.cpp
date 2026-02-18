class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char , int> pfreq;
        unordered_map<char , int> window;

        for(auto &it : p){
            pfreq[it]++;
        }

        int left = 0;
        vector<int> ans;
        int k = p.size();

        for(int right = 0 ; right < s.size() ;right++){
            window[s[right]]++;
            if(right - left + 1 > k){
                window[s[left]]--;
                if(window[s[left]] == 0){
                    window.erase(s[left]);
                }
                left++;
            }
            if(window == pfreq){
                ans.push_back(left);
            }
        }
        return ans;

    }
};