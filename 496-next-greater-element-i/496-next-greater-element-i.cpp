class Solution {
public:
    vector<int> NGE(vector<int>& array,int length){
        stack <int> stk;
        vector<int> nge(length,-1);
        stk.push(0);
        for(int i=1;i<length;i++){
            while(!stk.empty() and array[i]>array[stk.top()]){
                nge.at(stk.top())=array[i];
                stk.pop();
                
            }
            stk.push(i);
        }
        return nge;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        vector<int> nge=NGE(nums2,nums2.size());     
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }

        for(auto it=nums1.begin();it!=nums1.end();it++){
            auto search=mp.find(*it);
            // search for the element of nums1 in map 
            output.emplace_back(nge[search->second]);
            // emplace back the value from nge array of the searched element
        }

    return output;
    }
};