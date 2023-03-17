class Solution {
public:
    bool checkPalindrome(string &num,int l,int r){
        if(l>r){
            return true; 
        }
        if(num[l]==num[r])
            return checkPalindrome(num,l+1,r-1);
        return false;
    }
    bool isPalindrome(int x) {
        string num=to_string(x);
        int l=0,r=num.size()-1;
        return checkPalindrome(num,l,r);
    }
};