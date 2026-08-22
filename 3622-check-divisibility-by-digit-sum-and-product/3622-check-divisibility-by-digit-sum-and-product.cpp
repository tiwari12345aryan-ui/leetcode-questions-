class Solution {
public:
    bool checkDivisibility(int n) {
        int lesbian=n;
        int sum=0;
        int product=1;
        if(n<10)
        {
                return false;
            
        }
        while(n>0)
        {
            sum+=(n%10);
            product=product*(n%10);
            n=n/10;
        }
        int ans=sum+product;
        if(lesbian%ans==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};