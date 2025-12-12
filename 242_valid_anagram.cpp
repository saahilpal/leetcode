class Solution {
public:
    bool isAnagram(string s, string t) {

        /*
            Intuition:
            -----------
            Since the strings contain only lowercase letters, each character can be
            mapped to an index from 0 to 25 using (char - 'a').

            I create a frequency vector of size 26 initialized to zero.
            - For every character in string s, I increase its count (+1).
            - For every character in string t, I decrease its count (-1).

            If both strings are true anagrams, every increment from s will be
            cancelled out by a decrement from t.  
            So at the end, all values in the vector should be zero.
            If any value is positive or negative, it means frequency mismatch → not an anagram.
        */

        // If lengths differ, no need to check further
        if (s.length() != t.length())
            return false;

        // frequency array for 26 lowercase letters
        std::vector<int> v(26, 0);

        // Build frequency counts
        for (int i = 0; i < s.length(); i++) {
            v[s[i] - 'a']++;  // mark character from s
            v[t[i] - 'a']--;  // cancel using character from t
        }

        // Check if all counts returned to zero
        for (int i = 0; i < 26; i++) {
            if (v[i] != 0)
                return false;
        }

        return true;


        /*
            Time Complexity:  O(n)
            - We iterate through both strings once.

            Space Complexity: O(1)
            - The vector has fixed size 26 regardless of input size.
        */
    }
};
