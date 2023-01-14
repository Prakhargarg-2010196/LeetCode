class Solution {
public:
    bool  static comp(int s, int t){
        string si =to_string(s);
        string ti=to_string(t);
        return si+ti>ti+si;
    }
    string largestNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),comp);
        if(nums[0]==0)
            return "0";
        string res;
        for(auto&it:nums){
            string temp=to_string(it);
            res+=temp;
        }
        
        return res;
    }
};