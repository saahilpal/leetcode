class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;int r=0,m=x,INT_max,INT_min;
        if(x<0)
        return false;
         while(m>0)
         {
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return false;
            }
            r=m%10;
            m=m/10;
            rev=rev*10+r; 
         }
         if(rev==x)
         return true;
         else
         return false;
    }
};
/*
INTUITION:

A palindrome number is a number that remains the same after reversing it.
Example: 121 → 121.

NOTE (Negative Case):
Negative numbers cannot be palindrome because of the minus sign.
Example: -121 → 121- (not the same), so we directly return false.

To reverse a number, I follow these steps:

1. Take the last digit using modulo (% 10).
   This gives the last digit of the number and store it in `r`.

2. Remove the last digit by dividing the number by 10.

3. Update the reversed number:
   rev = rev * 10 + r

Dry Run for 121:

Initial:
m = 121, rev = 0

Step 1:
r = 121 % 10 = 1
rev = 0 * 10 + 1 = 1
m = 121 / 10 = 12

Step 2:
r = 12 % 10 = 2
rev = 1 * 10 + 2 = 12
m = 12 / 10 = 1

Step 3:
r = 1 % 10 = 1
rev = 12 * 10 + 1 = 121
m = 1 / 10 = 0

At the end, the reversed number (121) is equal to the original number,
so the number is a palindrome.

TIME COMPLEXITY:
O(log₁₀(n)) → We process each digit once.

SPACE COMPLEXITY:
O(1) → Only constant extra variables are used.
*/
