class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  n=nums.size(),major;
        unordered_map<int,int>freq;
        for(int x:nums)
        {
            freq[x]++;
        }
        
        for(auto it:freq)
        {
            
            if(it.second>n/2)
            {
                major=it.first;
            }
        }
       return  major;
        
        
    }
};
/*
Problem:
The task is to find the majority element in the array.
A majority element is the number that appears more than n/2 times,
where n is the size of the array.

Approach:
I use an unordered_map to count how many times each number appears.
First, I go through the array and increase the count for every element.
After that, I check the frequency map to find the element whose count
is greater than n/2. That element is the majority, so I return it.

Example:
For an array where the frequencies are:
1 → 4 times, 2 → 3 times, 3 → 1 time (n = 8),
the number 1 is the majority element because it appears more than n/2 times.

Time Complexity:
O(n) — the array is traversed once and the map is scanned once.

Space Complexity:
O(n) — extra space is used to store the frequency of elements.
*/
