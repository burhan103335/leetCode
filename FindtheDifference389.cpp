class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length(), sum = 0;

        for(int i = 0; i<n; i++) sum+= (t[i] - s[i]);
        return sum + t[n];
    }
};