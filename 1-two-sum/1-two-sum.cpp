class Solution {
public:    
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>imp;
        // vector<int> temp; no need as vector can be returned using { }
        for(int i=0;i<nums.size();i++)
        {
            if(imp.find(target-nums.at(i))!=imp.end())
               {
                   return{imp[target-nums.at(i)],i};
               }
               imp[nums.at(i)]=i;
        
        } 
               
        
        
        
        
        return {};
//                empty vector
    }
};