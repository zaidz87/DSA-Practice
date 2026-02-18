class Solution {
public:
    bool pall(string& s , int left , int right){
            if(left >= right) return true;
            if(!isalnum(s[left])){
                return pall(s,left+1,right);
            }
            else if(!isalnum(s[right])){
                return pall(s,left,right-1);
            }
            else if(tolower(s[left]) != tolower(s[right])) return false;

        return pall(s , left+1 , right-1);
    }
    bool isPalindrome(string s) {
        int left = 0;
        int right  = s.size()-1;
            
        return pall(s , left , right);
    }
};