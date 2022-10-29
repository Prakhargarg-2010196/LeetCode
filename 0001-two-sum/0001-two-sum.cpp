class Solution {
public:    
    vector<int> twoSum(vector<int>& nums, int target) {
        // Naive Approach
        // for(int i=0;i<nums.size();i++){
        //     int j=0;
        //     while(j<nums.size()){
        //         if(i==j){
        //             j++;
        //             continue;
        //         }
        //         else{
        //             if((target-nums[i])==nums[j]){
        //                 return {i,j};
        //             }
        //         }
        //         j++;
        //     }
        // }
        // return {};
        
        //Better Complexity Approach
        unordered_map<int,int>imp;
        // vector<int> temp; no need as vector can be returned using { }
        for(int i=0;i<nums.size();i++)
        {
            if(imp.find(target-nums.at(i))!=imp.end())
                   return{imp[target-nums.at(i)],i};
                    // here imp[target-nums.at(i)] is the second index and i is the current one.
            
            imp[nums.at(i)]=i;
        
        } 
        return {};
//                empty vector
    }
};