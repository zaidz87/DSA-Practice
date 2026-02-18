class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char , int> pfreq;
        unordered_map<char , int> window;

        for(auto &it : s1){
            pfreq[it]++;
        }

        int left = 0;
        for(int i = 0 ; i < s2.size() ; i++){
            window[s2[i]]++;
            if(i - left + 1 > s1.size()){
                window[s2[left]]--;
                if(window[s2[left]] == 0){
                    window.erase(s2[left]);
                }
                left++;
            }
            if(window == pfreq){
                return true;
                break;
            }
        }
        return false;
    }
};