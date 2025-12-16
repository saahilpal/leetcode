/*
Intuition:
We want to reverse the string in-place, without using extra space.
To do this, we use the two-pointer approach.

One pointer (l) starts from the beginning of the vector,
and another pointer (h) starts from the end.

At each step:
- Swap the characters at positions l and h
- Move l forward and h backward

This continues until both pointers meet or cross.
By swapping from both ends toward the center, the string gets reversed efficiently.

Time Complexity: O(n)
- Each character is visited once.

Space Complexity: O(1)
- No extra space is used; reversal is done in-place.
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,h=s.size()-1;
        while(l<=h)
        {
            swap(s[l],s[h]);
            l++,h--;
        }
       
    }
};