class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        int n=nums.size();
        nums1.push_back(nums[0]);
        nums2.push_back(nums[1]);
        for(int i=2;i<n;i++)
        {
        if(nums1[nums1.size()-1]>nums2[nums2.size()-1])
        {
            nums1.push_back(nums[i]);
           
        }
        else{
            nums2.push_back(nums[i]);
        }
        }
        vector<int> result=nums1;
        result.insert(result.end(),nums2.begin(),nums2.end());
        return result;

    }
};