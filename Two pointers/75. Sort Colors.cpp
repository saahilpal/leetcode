class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1,m=0;

        while(m<=high)
    {
        
            if(nums[m]==2)
            {
                swap(nums[m],nums[high]);
                high--;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else if(nums[m]==0)
            {
                swap(nums[m],nums[low]);
                low++,m++;
            }
            
    }
    }
};
/*
INTUITION:
The array contains only three values: 0 (red), 1 (white), and 2 (blue).

Instead of using a built-in sort which takes O(n log n) time,
we can solve this in O(n) using the Dutch National Flag approach.

We maintain three pointers:
- low   → boundary for placing 0s
- m     → current index being checked
- high  → boundary for placing 2s

Logic:
- If nums[m] == 2:
    Swap it with nums[high] and decrement high.
    Do NOT increment m, because the swapped element needs to be checked again.
- If nums[m] == 1:
    It is already in the correct position, so just move m forward.
- If nums[m] == 0:
    Swap it with nums[low], then increment both low and m.

This way, all elements are sorted in a single pass.

Time Complexity: O(n)
Space Complexity: O(1)
*/
