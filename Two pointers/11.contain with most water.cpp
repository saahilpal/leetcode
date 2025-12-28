class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0, high = height.size() - 1, max = 0;
        while (low < high) {
            int w = high - low;
            int l = min(height[low], height[high]);
            int area = (w * l);
            if (area > max)
                max = area;
            if (height[low]< height[high])
                low++;
            else
                high--;
        }
        return max;
    }
};
/*  
Intuition:

I need to find the maximum area of water that can be stored between two lines.

To do this efficiently, I use the two-pointer approach.
I place one pointer at the start (low) and one at the end (high) of the array.

At each step:
• I calculate the area using:
  area = min(height[low], height[high]) × (high − low)
• I compare this area with the current maximum and update it if needed.

Since the width decreases as pointers move closer,
the only way to possibly get a bigger area is by increasing the height.
So, I move the pointer with the smaller height:
• If height[low] < height[high], I increment low
• Otherwise, I decrement high

I repeat this until both pointers meet.

Time Complexity: O(n)
Space Complexity: O(1)
*/
