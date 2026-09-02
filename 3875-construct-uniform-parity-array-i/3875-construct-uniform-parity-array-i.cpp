class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> nums2;
        int n=nums1.size();
        int oddcount=0;
        int evencount=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                evencount++;
            }
            else{
                oddcount++;
            }
            }
            if(evencount==n || oddcount==n)
            {
                return true;
            }
            if(oddcount == evencount)
            {
                return true;
            }
            if(oddcount>=1 || oddcount<n)
            {
                return true;
            }
            return 0;

    }
};