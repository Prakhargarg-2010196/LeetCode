class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // without exchange function approach 
        int mx=-1;
        for(int i=arr.size()-1;i>=0;i--){
            // storing the value first
           int temp=arr[i];
                 arr[i]=mx;
            mx=max(mx,temp);
        }
        return arr;
           
    }
};