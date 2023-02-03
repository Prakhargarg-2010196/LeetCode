class Solution {
public:
    long long square(int squareRoot){
        return (long long)squareRoot*squareRoot ;
    }
    int mySqrt(int x) {
        if(x==0)
            return x;
        int low=1;
        int high=x;
        int sol;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(square(mid)<=x)
            {   // store the nearest integer to the square root of x 
                low=mid+1;
                sol=mid;
            }
            else if(square(mid)>x)
            {  
                high=mid-1;                
            } 
            
            
        }
        return sol;
        
    }
};