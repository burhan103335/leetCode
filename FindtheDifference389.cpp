class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length();
        
        vector<int> v(26,0);
        
        for(int i = 0; i<n; i++) ++v[s[i]-'a'];
        
        for(int i = 0; i<=n; i++) {
            if(v[t[i]-'a'] == 0) return t[i];
            --v[t[i]-'a'];
        }
        return t[0];
    }
};