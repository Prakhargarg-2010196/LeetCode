class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int L=0;
        int R=n-1;
        char sol=letters[0];
        while(L<=R){
            int mid=L+(R-L)/2;
            if(letters[mid]>target)
            {   R=mid-1;
                sol=letters[mid];
            }
            else {
                L=mid+1;
                // sol=letters[mid];
            } 
        }
        return sol;
    }
};