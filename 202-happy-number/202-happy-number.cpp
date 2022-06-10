class Solution {
public:

    
    
    //     Floyd Cycle approach
    int findDigitSquare(int n)
    {   int sum=0;
        while(n>0)
        {   int digit=n%10; 
            n/=10;
            sum+=digit*digit;

                
        }
     return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=findDigitSquare(n);
        while(fast!=1&&slow!=fast){
        slow=findDigitSquare(slow);

        fast=findDigitSquare(fast);    
        fast=findDigitSquare(fast);    
        
        }
        return fast==1;
        
    }
    // HashSet Approach
//     bool isHappy(int n) {
        
//         while(fast!=1 && slow!=fast){
//         slow=findDigitSquare(n);
//         fast=findDigitSquare(n);
//         fast=findDigitSquare(n);    
//         }
//         return fast==1;
        
//     }
};