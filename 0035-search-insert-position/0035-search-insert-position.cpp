class Solution {
public:
    int binarySearch(vector<int> &A,int query){
    int n = A.size();
    int L = 0, R = n - 1,pos;
    while(L<=R){
        int mid = (L + R) / 2;
        if(A[mid]==query)
            return mid;
        else if(A[mid]<query)
        {  L = mid + 1;
           
        }
        else{
            R = mid - 1;
           
            
        }
            
    }
    return L;
}
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,target);
    }
};