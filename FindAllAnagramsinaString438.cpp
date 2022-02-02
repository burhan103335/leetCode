class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>v;
        
        int sz = p.length(), n = s.length(), ar[26], tmp[26];
        for(int i = 0; i<26; i++) ar[i] = 0;
        for(int i = 0; i<sz; i++) ar[p[i]-'a']++;
        
        for(int i = 0; i<=n-sz; i++){
            for(int j = 0; j<26; j++) tmp[j] = ar[j];
            for(int j = i; j<i+sz; j++){
                tmp[s[j]-'a']--;
                if(tmp[s[j]-'a']<0) break;
            }
            bool ck = 1;
            for(int j = 0; j<26; j++) if(tmp[j]!=0) {ck = 0; break;}
            if(ck) v.push_back(i);
        }
        return v;
    }
};