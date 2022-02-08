/*using recursion*/

class Solution {
public:
    int getres(int num){
        if(num/10 == 0) return num;

        int res = 0;
        while(num){
            res += (num%10);
            num /= 10;
        }
        return getres(res);
    }

    int addDigits(int num) {
        return getres(num);
    }
};