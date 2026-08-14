class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        vector<int> ans;
        if(arr.empty())
        {
            return ans;
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int num=arr[0];
        int last=arr[n-1];
        set<int> s;
        s.insert(arr.begin(),arr.end());
        for(int i=num;i<=last;i++)
        {
            if(s.find(i)==s.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};