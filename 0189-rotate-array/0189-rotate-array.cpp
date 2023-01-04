class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //first approach
       
          /* 
            (i+k)%n here i+k gives the index where element has to be placed after rotation but in certain case where k>=n then the element might move out of the array so to get back the index of the array where the element has to be placed remainder is calculated.
            k=7 and n=7  , if i=0 then after i+k=7 and 7 index does not lie in array and have to be found a position so the correct position is found by remainder as it gives the remainder of the index after k rotations are made 
        
        */
//         int n=nums.size();
//         if(n==0||k==0)
//             return;
//         vector<int>temp=nums;
//         int i=0;
       
//         while(i<n){
//             nums[(i+k)%n]=temp[i];
                
//             i++;
//         }
        
        //second approach (using reverse)
        /* for example k=7 and n=7 then each element remains at its own position so we should only find the remainder of the rotations to be made 
 and then do only those
     */ 
        int n=nums.size();
        k=k%n;// to remove replication of no.of rotations made 
        
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};