class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        vector<vector<string>> str;
        for(int i=0;i<strs.size();i++)
        {
             string temp=strs[i];
           sort(temp.begin(),temp.end());
           ans[temp].push_back(strs[i]);
        }
        for(auto &x : ans )
        {
            str.push_back(x.second);
        }
        return str;
    }
};