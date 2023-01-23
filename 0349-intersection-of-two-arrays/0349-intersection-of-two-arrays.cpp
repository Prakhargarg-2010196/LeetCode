class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> res;
        
//         unordered_set<int>s1(nums1.begin(),nums1.end());
//         unordered_set<int>s2(nums2.begin(),nums2.end());
        // naive solution is to check each element for presence in other array 
        // it would take O(n*m) for such a solution 
        // storing them in set and then checking takes O(1) time for each check and O(n+m) for complete;
        
        // int n1=s1.size();
        // int n2=s2.size();
        // if(n1>n2)
        //     for(auto&it:s2){
        //         if(s1.count(it)){
        //             res.push_back(it);
        //         }
        //     }
        // else
        //     for(auto&it:s1){
        //         if(s2.count(it)){
        //             res.push_back(it);
        //         }
        //     }
        
//         binary search Approach
        unordered_set<int>s;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int n1=nums1.size();
        int n2=nums2.size();
        if(n1>n2)
            for(auto&it:nums2){
                if(binary_search(nums1.begin(),nums1.end(),it))
                    s.insert(it);
            }
        else
            for(auto&it:nums1){
                if(binary_search(nums2.begin(),nums2.end(),it))
                    s.insert(it);
            }
        vector<int>res(s.begin(),s.end());
        
        return res;
            
            
    }
};