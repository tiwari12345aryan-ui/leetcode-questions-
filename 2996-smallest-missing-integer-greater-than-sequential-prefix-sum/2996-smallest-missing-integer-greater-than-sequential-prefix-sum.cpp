class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int maxsum=INT_MIN;
        int n=nums.size();
        int sum=nums[0];
        unordered_set<int> s;
        for(int x : nums)
        {
            s.insert(x);
        }
        int i=1;
        while(i<n && nums[i]==nums[i-1]+1)
        {
            sum+=nums[i];
            i++;
        }
        while(s.find(sum)!=s.end())
        {
            sum++;
        }
        return sum;
        
    }
};