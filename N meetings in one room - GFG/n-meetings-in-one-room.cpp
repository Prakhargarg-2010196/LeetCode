//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
 
        int b,d;
        vector<pair<int,int>>v;
        for(b=0;b<n;b++)
        {
            v.push_back({end[b],start[b]});
        }
        sort(v.begin(),v.end());
        // if it would be pair of {start,end} then we would make a separate function
        int ans=1;
        int threshold=v[0].first;
        for(b=1;b<n;b++)
        {
            if(v[b].second>threshold)
            {
 
                ans++;
                threshold=v[b].first;
            }
 
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends