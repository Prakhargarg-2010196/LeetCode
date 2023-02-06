class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
           
        int m=nums1.size();
        int n=nums2.size();
       stack<int>stk;
       unordered_map<int,int>mp; 
       vector<int>vc;     
            for(int j=n-1;j>=0;j--){
            
                while(!stk.empty()&&stk.top()<=nums2[j]){
                    stk.pop();
                }
                if(stk.empty())
                    mp[nums2[j]]=-1;
                else 
                    mp[nums2[j]]=stk.top();
                stk.push(nums2[j]);
            }    
            // for(auto it:mp){
            //     cout<<it.first<<" "<<it.second<<endl;
            // }
            for(int i=0;i<m;i++){
                int eleSearch=nums1[i];
                auto it=mp.find(eleSearch);
                vc.push_back(it->second);
            }
        
        return vc;
        
    }
};