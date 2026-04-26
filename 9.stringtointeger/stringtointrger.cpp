class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();

        // 1. Skip whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Handle sign
        int sign = 1;
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. Convert digits
        int digit = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int num = s[i] - '0';

            // 4. Check overflow
            if (digit > INT_MAX / 10 || 
               (digit == INT_MAX / 10 && num > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            digit = digit * 10 + num;
            i++;
        }

        return digit * sign;
    }
};