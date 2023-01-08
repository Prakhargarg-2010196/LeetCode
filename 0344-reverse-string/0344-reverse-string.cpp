class Solution {
public:
    void reverseString(vector<char>& s) {
        int length=s.size();
        int start=0;
        int end=length-1;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
            
        }
        
        
    }
};