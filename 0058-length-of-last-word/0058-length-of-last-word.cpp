class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int length=0;
      
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && length==0)
            {
                continue;
            }
            if(s[i]==' ')
            {
                return length;
            }
            else{
                length++;
            }
            
        }
        return length;
    }
};