//383. Ransom Note

class Solution {
public:
    bool canConstruct(string r, string m) {
        int n = r.length(), nn = m.length();
        if(n>nn) return false;
        
        vector<int> v(26,0), vv(26,0);
        
        for(char c : r) v[c-'a'] ++;
        for(char c : m) vv[c-'a'] ++;
        for(int i = 0; i<26; i++) {
            if(v[i]>vv[i]) return 0;
        }
        
        return 1;
    }
};