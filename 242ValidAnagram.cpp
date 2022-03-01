//242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        vector<int> v(26,0), vv(26,0);
        
        for(char c : s) v[c-'a'] ++;
        for(char c : t) vv[c-'a'] ++;
        for(int i = 0; i<26; i++) {
            if(v[i] != vv[i]) return 0;
        }
        
        return 1;
    }
};