class Solution {
public:
 
    void merge(vector<pair<int,int>>&v,int low,int mid,int high,vector<int>&ans)
    {
      vector<pair<int,int>>temp(high-low+1);
      int i=low,j=mid+1;
      int x=0;
      while(i<=mid && j<=high)
      {
          if(v[i].first<=v[j].first)
          {
              temp[x]=v[j];
              j++;
              x++;
          }
          else
          {
              temp[x]=v[i];
              ans[v[i].second]+=high-j+1;
              i++;
              x++;
          }
 
      }
      while(i<=mid)
      {
         temp[x]=v[i];
         i++;
         x++;
      }
      while(j<=high)
      {
          temp[x]=v[j];
          j++;
          x++;
 
      }
      x=0;
      for(i=low;i<=high;i++)
      {
          v[i]=temp[x];
          x++;
      }
 
    }
    void mergesort(vector<pair<int,int>>&v,int low,int high,vector<int>&ans)
    {
      if(low>=high)return;
 
       int mid=(low+high)/2;
       mergesort(v,low,mid,ans);
       mergesort(v,mid+1,high,ans);
       merge(v,low,mid,high,ans);
 
 
    }
    vector<int> countSmaller(vector<int>& nums) {
    int b,d;
    int n=nums.size();
    vector<int>ans(n);
    vector<pair<int,int>>v;
    for(b=0;b<nums.size();b++)
    {
        v.push_back({nums[b],b});
    }
    mergesort(v,0,n-1,ans);
    //cout<<ans<<endl;
 
    return ans;
 
 
 
    }
};