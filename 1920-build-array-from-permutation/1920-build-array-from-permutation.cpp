class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
//     Time Complexity:O(n)
//     Space Complexity:O(n);
    //  vector<int> ans;
    //     for(int i=0;i<nums.size();i++){
    //         ans.push_back(nums.at(nums.at(i)));
    //     }
    //     return ans;
    // 
// To reduce the space complexity to O(1) store both numbers at same location.
    int n=nums.size();
    for(int i=0;i<n;i++){
        nums[i]=nums[i]+(nums[nums[i]]%n)*n;
        // As for some numbers the value of a can already be changed from previous values so by mod n we get previous value .
        // a= a + (b%n)*n
        // previous value of a = a%n;
        // secondary value stored in a 
        //  b=a/n;
        
    }
    for(int i=0;i<n;i++){
        nums[i]=nums[i]/n;
    }
        return nums;
    }
};