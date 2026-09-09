class Solution {
public:
    long long countCommas(long long n) {
       long long ans=0;
        if(n<1000)
        {
            return 0;
        }
        else if(1000<=n && n<1000000){
             ans=n-1000+1;
            
        }
        else if(1000000<=n && n<1000000000)
        {
            ans=999000;
            ans+=(n-1000000+1)*2;
        }
        else if(1000000000<=n && n<1000000000000)
        {
            ans=999000;
            ans=ans+(999000000*2);
            ans+=(n-1000000000+1)*3;
        }
        else if(1000000000000LL <= n && n <= 1000000000000000LL)
{
    ans = 999000;
    ans += 999000000LL * 2;
    ans += 999000000000LL * 3;
   
    
    if(n == 1000000000000000LL)
    {
         ans += 999000000000000LL * 4;
        ans += 5;
    }
    else
    {
        ans += (n - 1000000000000LL + 1) * 4;
    }
}
        return ans;
    }
};