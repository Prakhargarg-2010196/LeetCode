class Solution {
public:
    bool isPalindrome(string s) {
        string str,rev;
        for(auto&it:s)
            it=('A'<=it&&it<='Z')?it+32:it;
               
        for(auto&it:s){
            if(it>='a'&&it<='z'||it>='0'&&it<='9'){
                str+=it;
            }
        }
        for(auto it=str.rbegin();it!=str.rend();it++)
            rev+=*it;
        if(str==rev)
            return true;
    return false;    
    }
};