class Solution {
public:
    bool isPalindrome(string s) {
        string str;
//         for(auto&it:s)
//             it=('A'<=it&&it<='Z')?it+32:it;
               
        // for(auto&it:s){
        //     if(it>='a'&&it<='z'||it>='0'&&it<='9'){
        //         str+=it;
        //     }
        // }
        //As the motion of the pointers is unpredictable avoid using for loop
        int l=0,r=s.size()-1;
        while(l<r){
            while(l<r&&!isalnum(s[l]))
                l++;
            while(l<r&&!isalnum(s[r]))
                r--;
            if(tolower(s[l])!=tolower(s[r]))
                return false;
            l++;
            r--;
        }
        
    return true;    
    }
};