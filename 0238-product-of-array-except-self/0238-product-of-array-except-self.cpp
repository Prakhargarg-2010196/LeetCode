class Solution {
// Naive approach(time limit exceeds O(N2))
// The more u practice the more great u will become |-_-|
    // public:
    // vector<int> productExceptSelf(vector<int>& nums) {
    //     int i,j;
    //     int n=nums.size();
    //     vector<int>result(n,1);
    //     for(i=0;i<n;i++){
    //         for(j=0;j<n;j++){
    //             if(i==j){
    //                 continue;
    //             }
    //             result[i]=result[i]*nums[j];
    //         }
    //     }
    //     return result;
    // }
    // second approach with
    // T(n):O(n)
    // S(n):O(n)// extra arrays are used to store the prefix products and suffix products.
//     public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>leftProducts(n);
//         vector<int>rightProducts(n);
        
//         //making the first element and last element of both to be 1 as the prefix and suffixes are to leftmost and rightmost elements don't exist
//         leftProducts[0]=1;
//         rightProducts[n-1]=1;
//         //fill the arrays with respective products
//         for(int i=1;i<n;i++){
//             leftProducts[i]=leftProducts[i-1]*nums[i-1];
//         }
//         for(int i=n-2;i>=0;i--){
//             rightProducts[i]=rightProducts[i+1]*nums[i+1];
//         }
//         vector<int> result(n);
//         for(int i=0;i<n;i++){
//             result[i]=leftProducts[i]*rightProducts[i];
//         }
//         return result;
//     }
    //Time Complexity:O(n)
    //Space Complexity:O(1)// no requirement of extra arrays as we can take the left product or right product as variable and take the other respective product as output array.
    public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftProduct(n);
        leftProduct[0]=1;
        int rightProduct=1;
        for(int i=1;i<n;i++){
          leftProduct[i]=leftProduct[i-1]*nums[i-1];  
        }
        for(int i=n-1;i>=0;i--){
            leftProduct[i]*=rightProduct;
            rightProduct*=nums[i];
        }
        return leftProduct;
    }
};