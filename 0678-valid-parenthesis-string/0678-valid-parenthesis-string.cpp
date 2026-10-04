class Solution {
public:
    bool checkValidString(string s) {
       int lo=0;
       int hi=0;
       for(int i=0;i<s.size();i++)
       {
        if(s[i]=='(')
        {
            lo++;
            hi++;
        }
        else if(s[i]==')')
        {
            lo--;
            hi--;
        }
        else{
            lo--;
            hi++;
        }
        if(hi<0)
        {
            return false;
        }
        else if(lo<0)
        {
            lo=0;
        }
       }
       return lo==0;
      


    }
};