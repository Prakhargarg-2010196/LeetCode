class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto&it:s)
            it=('A'<=it&&it<='Z')?it+32:it;
               
        for(auto&it:s){
            if(it>='a'&&it<='z'||it>='0'&&it<='9'){
                str+=it;
            }
        }
        for(int i=0,j=str.size()-1;i<str.size();i++,j--){
            if(str[i]!=str[j])
                return false;
            
        }
        
    return true;    
    }
};