class Solution {
public:
    vector<int> binarySearch(vector<int>&A,int target){
        vector<int>ans(2,-1);
        int n=A.size();
        int L=0;
        int R=n-1;
        while(L<=R){
            int mid=L+(R-L)/2;// to avoid integer overflow
            if(A[mid]==target)
            {   if(mid==L||A[mid-1]!=A[mid])
                {   // compare if the mid is at start or if previous element to mid element is equal to it or not(this we are doing as there can be multiple same elements.)
                   ans[0]=mid;
                   break;
                }      
                else {
                    R=mid-1;// shift as it is not the starting index
                    ans[0]=mid-1;// store ans even if its not correct
                }
            }
            else if(A[mid]<target)
                L=mid+1;
            else 
                R=mid-1;
            
        }
         L=0;
         R=n-1;
        while(L<=R){
            int mid=L+(R-L)/2;// to avoid integer overflow
            if(A[mid]==target)
            {   if(mid==R||A[mid+1]!=A[mid])
                {   // compare if the mid is at end or if next element to mid element is equal to it or not (this we are doing as there can be multiple same elements.)
                   ans[1]=mid;
                   break;
                }      
                else {
                    L=mid+1;// shift as it is not the ending index
                    ans[1]=mid+1;// storing even if its not correct
                }
            }
            else if(A[mid]<target)
                L=mid+1;
            else 
                R=mid-1;
            
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return binarySearch(nums,target);
    }
};