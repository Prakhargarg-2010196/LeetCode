class Solution {
public:
    double myPow(double x, int n) {
         double res;
         long long nn=abs(n);
        // BC
        if(n==0)
            return 1;
        if(x==0) 
            return 0;
        
        if(nn%2==0){
            res=myPow(x,nn/2);
            res=res*res;
            return n<0?1/res:res;
        }
        else {
             res=myPow(x,nn-1);
             return n<0?1/(x*res):x*res;
        }
        
        
    }
};