class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // WITHOUT EXCHANGE FUNCTION 
        // int mx=-1;
        // for(int i=arr.size()-1;i>=0;i--){
        //     // storing the value first
        //    int temp=arr[i];
        //     //storing the current max value to the right in the present element 
        //          arr[i]=mx;
        //     // now find the max element to right.
        //     mx=max(mx,temp);
        // }
        // return arr;
        
        //WITH EXCHANGE FUNCTION
        for(int it=arr.size()-1, mx=-1;it>=0;it--){
            
            mx=max(mx,exchange(arr[it],mx));
            //expands as follows
            // exchange(arr[it],mx);
            // max(mx,arr[it]);
        }
           return arr;
    }
};