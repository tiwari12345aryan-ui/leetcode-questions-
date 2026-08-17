class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> leg;
        int count=0;
        for(int x : nums)
        {
            leg.insert(x);
        }
        for(int nu : leg)
        {
            for(int m : nums)
            {
                if(m==nu)
                {
                    count++;
                }
            }
            if(count>n/2)
            {
                return nu;
            }
        }
        return -1;
       

        }
};