//165 Compare Version Numbers leetcode problem solve 25 Feb 2022 with simple logic
class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i = 0, j = 0, n1 = v1.length(), n2 = v2.length(), sum1, sum2;
        
        while(i<n1 || j<n2) {
            sum1 = 0, sum2 = 0;
            while(i<n1 && v1[i] !='.'){
                sum1*=10; sum1 += v1[i]-'0';
                i++;
            }
            while(j<n2 && v2[j] !='.'){
                sum2*=10; sum2 += v2[j]-'0';
                j++;
            }
            i++, j++;
            if(sum1<sum2) return -1;
            else if( sum1>sum2) return 1;
        }
        return 0;
    }
};