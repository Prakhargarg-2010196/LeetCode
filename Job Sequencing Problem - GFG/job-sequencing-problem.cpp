//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
     static bool comp(Job J1, Job J2)
    {
        return J1.profit>J2.profit;
 
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
 
        int b,d;
        sort(arr,arr+n,comp);
        vector<int>track(n+1,-1);
        int cnt=0; // number of jobs done
        int maximumprofit=0; // profit
        for(b=0;b<n;b++)
        {
            for(d=arr[b].dead;d>=1;d--)
            {
                if(track[d]==-1)
                {
                    track[d]=arr[b].id;
                    cnt++;
                    maximumprofit+=arr[b].profit;
                    break;
                }
            }
        }
        vector<int>ans;
        ans.push_back(cnt);// count
        ans.push_back(maximumprofit);//profit
        return ans;
 
 
    }
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends