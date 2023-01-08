class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        while(l<=r){
            if((target-numbers[l])==numbers[r])
                return {l+1,r+1};
            else if((target-numbers[l])<numbers[r])
                r--;
            else
                l++;
            
        }
        return {};
    }
};