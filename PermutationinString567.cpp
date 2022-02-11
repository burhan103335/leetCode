/* sliding window */

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n1 = s1.length(), n2 = s2.length();
        
        if(n2<n1) return 0;
        
        vector<int> v1(26, 0), v2(26, 0);
        
        for(char c: s1) ++v1[c-'a'];
        
        for(int i = 0; i<n1-1; i++) ++v2[s2[i]-'a'];
        
        for(int i = n1-1, j = 0; i<n2; i++, j++){
            ++v2[s2[i]-'a'];
            if(v1==v2) return 1;
            --v2[s2[j]-'a'];
        }
        return 0;
        
    }
};