class Solution {
public:
    int reverse(int x) {

        /*
        INTUITION (Short Version)
        -------------------------
        We reverse the number digit by digit:
            - Take last digit   → r = m % 10
            - Remove it         → m = m / 10
            - Add to result     → rev = rev*10 + r

        The only challenge is overflow.
        Before multiplying rev by 10, we check:
            rev > INT_MAX/10  or  rev < INT_MIN/10
        If true, next step would overflow a 32-bit integer,
        so we return 0 (as required by the problem).
        */

        int rev = 0, m = x;

        while (m != 0) {
            int r = m % 10;

            if (rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;

            m /= 10;
            rev = rev * 10 + r;
        }

        /*
        Time Complexity:  O(log10(x))   // one loop per digit
        Space Complexity: O(1)          // constant variables
        */

        return rev;
    }
};
