//387. First Unique Character in a String
class Solution {
    
struct Point {
    int x = 0;
    int y = 0;
};
    
public:
    int firstUniqChar(string s) {
        int n = s.length(), val, ans = INT_MAX;
        struct Point v[28];
        for(int i = 0; i<n; i++) {
            val = s[i] - 'a';
            v[val].x++;
            v[val].y = i;
        }
        for(int i = 0; i<26; i++){
            if(v[i].x == 1) ans = min(ans, v[i].y);
        }
        return ans==INT_MAX ? -1 : ans;
    }
};