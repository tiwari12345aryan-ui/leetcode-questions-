class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int n=nums.size();
        long long  sum=0;
        int ans=INT_MAX;
        for(right=0;right<n;right++)
        {
           if(left<=right )
            {
                sum+=nums[right];
            }
            while(sum>=target)
            {
                ans=min(ans,right-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        return(ans==INT_MAX ?0 : ans);
    }
};