//392. Is Subsequence
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(), nn = t.length(), i = 0, j = 0;
        
        while(i<n && j<nn){
            if(s[i]==t[j]) i++;
            j++;
        }
        return i==n;
    }
};