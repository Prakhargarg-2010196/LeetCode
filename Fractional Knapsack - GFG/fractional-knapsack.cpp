//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
 
        int b,d;
        vector<pair<double,int>>w;
        for(b=0;b<n;b++)
        {
            w.push_back({double(arr[b].value)/double(arr[b].weight),arr[b].weight});
        }
 
        // second step
 
        sort(w.begin(),w.end(),greater<pair<double,int>>());
 
        // third step
        int currweight=0;
        double profit=0;
        for(b=0;b<w.size();b++)
        {
            if(currweight+w[b].second<=W)
            {
                currweight+=w[b].second;
                profit+=(w[b].second*w[b].first);   
            }
            else
            {
                int left=W-currweight;
                profit+=left*w[b].first;
                break;
            }
 
        }
        return profit;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends