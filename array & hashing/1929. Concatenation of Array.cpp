// -------------------------------------------------------------
//  LeetCode: 1929. Concatenation of Array
//  Difficulty: Easy
//
//  Intuition:
//  We need to create an array of size 2*n by repeating the 
//  elements of the input array twice. Instead of using push_back,
//  we can directly construct the answer vector with size 2*n and 
//  fill it using simple indexing.
//
//  Approach:
//  1. Let n = nums.size().
//  2. Create result vector 'ans' of size 2*n.
//  3. Copy nums[i] into ans[i] and ans[i + n] for all i.
//  4. Return ans.
//
//  Time Complexity:  O(n)     — single pass through nums
//  Space Complexity: O(n)     — output vector of size 2*n
//
//  Example:
//  nums = [1, 2, 1]
//  ans  = [1, 2, 1, 1, 2, 1]
//
// -------------------------------------------------------------

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {   
        int n = nums.size();
        vector<int> ans(n * 2);  // allocate space for 2 copies

        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i];       // first copy
            ans[i + n] = nums[i];   // second copy
        }

        return ans;
    }
};
