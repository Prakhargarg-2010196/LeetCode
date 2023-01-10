class Solution {
public:
    //As the two vectors are to be compared
    // write here what needs to be compared
    static bool comp(vector<int>& a,vector<int>& b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int R=intervals.size();
        int C=intervals[0].size();
        
        //sort according to the first element of intervals 
        sort(intervals.begin(),intervals.end(),comp);
 // print the sorted array 
//         for(auto& it:intervals){
//             for(auto& it2:it){
//                cout<<it2<<" ";    
//             }
//         cout<<endl;
            
//         }
        vector<vector<int>>res;
        for(int i=0;i<R;i++){
          
            int startInterval=intervals[i][0];//1 2 8 
            int endInterval=intervals[i][1]; // 3  6 10
            
            while(i+1<R&&endInterval>=intervals[i+1][0]){
                endInterval=max(endInterval,intervals[i+1][1]);//
                i++;
            }
            
            res.push_back({startInterval,endInterval});
            
            
            
            
            }
        return res;
    }
    
        
    
};