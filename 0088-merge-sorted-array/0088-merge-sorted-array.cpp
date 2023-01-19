class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
                  
        // int i=0,j=0,k=0;
        // vector<int>temp(m+n);
        // while(i<m||j<n){
        //     if(j==n || i<m &&nums1[i]<=nums2[j])
        //     {
        //         temp[k]=nums1[i];
        //         i++;
        //         k++;
        //     }
        //     else
        //     {   
        //         temp[k]=nums2[j];
        //         j++;
        //         k++;
        //     }
        // }
        // O(n) and O(1)
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0||j>=0){
            if(j==-1||i>=0&&nums1[i]>=nums2[j])
            {   nums1[k]=nums1[i];
                i--;
                k--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        
    }
};