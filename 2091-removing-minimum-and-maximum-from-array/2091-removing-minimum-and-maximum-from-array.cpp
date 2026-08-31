class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n;
         if(nums.size()==0)
        {
            return 0;
        }
        int maxel=max_element(nums.begin(), nums.end()) - nums.begin();
        int minel=min_element(nums.begin(), nums.end()) - nums.begin();
        int mid=n/2;
        if(minel<mid && maxel<mid)
        {
            return max(minel,maxel)+1;
        }
        if(minel>=mid && maxel>=mid)
        {
            return n-min(maxel,minel);
        }
if((maxel < mid && minel >= mid) || 
   (minel < mid && maxel >= mid))
{
    int left = min(minel, maxel);
    int right = max(minel, maxel);

    return min({
        right + 1,
        n - left,
        left + 1 + (n - right)
    });
}
      
        return 0;
    }
    };