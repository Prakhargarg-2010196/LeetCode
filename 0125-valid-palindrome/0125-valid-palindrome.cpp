class Solution {
public:
    bool isPalindrome(string s) {
//   Method 1: Taking a space to store the string
       string str;
        for(auto&it:s)
            it=('A'<=it&&it<='Z')?it+32:it;
        for(auto&it:s){
            if(it>='a'&&it<='z'||it>='0'&&it<='9'){
                str+=it;
            }
        }
        for(int i=0,j=str.size()-1;i<str.size()/2;i++,j--)
            if(str[i]!=str[j])
                return false;
        return true;
        //Two Pointer Approach
        //As the motion of the pointers is unpredictable avoid using for loop
//         int l=0,r=s.size()-1;
//         while(l<r){
//             //ignores the spaces and other non-alphanumeric from both left and right
//             while(l<r&&!isalnum(s[l]))
//                 l++;
//             while(l<r&&!isalnum(s[r]))
//                 r--;
//             if(tolower(s[l])!=tolower(s[r]))
//                 return false;
//             l++;
//             r--;
//         }
        
//     return true;    
    }
};