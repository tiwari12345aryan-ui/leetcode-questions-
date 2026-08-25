class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>  arr;
        int n=nums.size();
        for(int num : nums)
        {
            arr.insert(num);
        }
        for(int i=1;i<102;i++)
        {
            if(arr.find(k*i)==arr.end())
            {
                return k*i;
            }
        }
        return 0;

            }
};