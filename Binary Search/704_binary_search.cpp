class Solution {
public:
    /*
    Intuition:
    Since the array is sorted, we can use Binary Search to efficiently find the target.
    We keep two pointers:
    - low at the start of the array
    - high at the end of the array

    In each iteration, we find the middle index:
    - If nums[mid] equals the target, we return mid.
    - If nums[mid] is smaller than the target, the target must be in the right half,
      so we move low to mid + 1.
    - If nums[mid] is greater than the target, the target must be in the left half,
      so we move high to mid - 1.

    The loop continues until low exceeds high.
    If the target is not found, we return -1.

    Time Complexity:
    - Best Case: O(1)
    - Average Case: O(log n)
    - Worst Case: O(log n)

    Space Complexity:
    - O(1) (constant extra space)
    */
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
};
