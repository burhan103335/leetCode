class Solution {
    /* I'm trying to check*/
public:
    bool detectCapitalUse(string word) {

        int n = word.length(), upper = 0;
        
        for(int i = 0; i<n; i++)
            if(word[i]>='A' && word[i]<='Z') upper++;
        
        if(upper==n || upper == 0) return true;
        else if(upper==1 && (word[0]>='A' && word[0]<='Z')) return true;
        else return false;
    }
};