class Solution {
public:
    int reverse(int x) {
        int res = 0;
        int i = 0;
        while (x != 0) {
            int remainder = x % 10;
            
            x /= 10;
            
            if (i == 0) {
                i++;
            }
            else {
                if (((long) res * 10 > INT_MAX) || ((long) res * 10 < INT_MIN)) {
                        res = 0;
                        break;
                }
                res *= 10;
            }
            res += remainder;
        }
                
        return res;
    }
};
