class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=val)
            {
                nums[i]=nums[j];
                i++;
            }
        }    
        return i;  
    }
};

/*
INTUITION:

I just need to remove the given element, and because LeetCode uses a custom judge,
it only checks the first `k` elements, not the full array.

So my focus is only to make the first `k` positions contain elements
that are NOT equal to the given value.

I use two pointers:
- `j` to go through the array
- `i` to keep track of where to place the next valid element

Whenever nums[j] is not equal to `val`,
I copy it to nums[i] and then increase `i`.

Example:
nums = [3, 2, 2, 3], val = 2

i = 0

j = 0 → nums[j] != val → copy to nums[i]
array becomes [3], i = 1

j = 1 → nums[j] == val → skip
j = 2 → nums[j] == val → skip

j = 3 → nums[j] != val → copy to nums[i]
array becomes [3, 3], i = 2

Loop ends and I return `i`.

The custom judge will only check the first `i` elements,
so [3, 3] is a valid answer.

Time Complexity: O(n)
Space Complexity: O(1)
*/

