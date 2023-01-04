class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //first approach
       
          /* 
            (i+k)%n here gives the index after removing the no.of replicated rotations made we could have used i+k instead of i+k but then for example
            k=7 and n=7 conditions were met then futile transactions would be made.
        
        */
//         int n=nums.size();
//         if(n==0||k==0)
//             return;
//         vector<int>temp=nums;
//         int i=0;
       
//         while(i<n){
//             nums[(i+k)]=temp[i];
       
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