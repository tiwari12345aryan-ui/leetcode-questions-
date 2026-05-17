//Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int frequency=0;
        int ans=0;
        for(int val : nums)
        {
            if(frequency==0)
            {
            ans=val;
            }
            if(ans==val)
            {
                frequency++;
            }
            else 
            frequency--;

        }
        return ans;
    }
};