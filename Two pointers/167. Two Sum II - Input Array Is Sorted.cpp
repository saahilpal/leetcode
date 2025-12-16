class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*
        Intuition:
        ----------
        - The array is already sorted in non-decreasing order.
        - We use two pointers:
            low  → starts from the beginning (smallest value)
            high → starts from the end (largest value)
        - At each step:
            • If numbers[low] + numbers[high] == target
              → we found the required pair, return their 1-based indices.
            • If the sum is greater than target
              → move the high pointer left to reduce the sum.
            • If the sum is smaller than target
              → move the low pointer right to increase the sum.
        - Because the array is sorted, this approach guarantees we find
          the answer without checking all pairs.
        */

        int low = 0, high = numbers.size() - 1;

        while (low < high) {
            int sum = numbers[low] + numbers[high];

            if (sum == target) {
                // +1 because the problem expects 1-based indexing
                return { low + 1, high + 1 };
            }
            else if (sum > target) {
                high--;   // decrease sum
            }
            else {
                low++;    // increase sum
            }
        }

        // Problem guarantees exactly one solution,
        // this return is just for safety.
        return {};
    }
};

/*
Time Complexity:
----------------
O(n)
- Each pointer moves at most n times.
- We scan the array only once.

Space Complexity:
-----------------
O(1)
- No extra data structures are used (constant extra space).
*/
