class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        vector<vector<int>> temp;
        int currsum=0;
        int maxlen=-1;
        int left=0;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int ans=sum-x;
        for(int right=0;right<n;right++)
        {
            currsum+=nums[right];
            while(currsum>ans && left<=right)
            {
                currsum-=nums[left];
                left++;

            }
            if(currsum==ans)
            {
                maxlen=max(maxlen,right-left+1);
            }

        }
        if(maxlen==-1)
        {
            return -1;
        }
        return n-maxlen;



    }
};