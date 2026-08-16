class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int n=s.length();
        vector<int> freq(256,0);
        int og=INT_MIN;
        if(n==0)
        {
            return 0;
        }
       
        
            for(right=0;right<n;right++)
            {
                freq[s[right]]++;
                while(freq[s[right]]>1)
                {
                    freq[s[left]]--;
                    left++;
                }
                og=max(og,right-left+1);

            
        }
        return og;

    }
};