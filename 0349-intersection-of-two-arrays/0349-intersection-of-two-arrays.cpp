class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        
        
        int n1=s1.size();
        int n2=s2.size();
        if(n1>n2)
            for(auto&it:s2){
                if(s1.count(it)){
                    res.push_back(it);
                }
            }
        else
            for(auto&it:s1){
                if(s2.count(it)){
                    res.push_back(it);
                }
            }

        return res;
            
            
    }
};