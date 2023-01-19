class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int i=0,j=n-1,count=0;
        while(i<=j){
            int tw=people[i]+people[j];
            count++;
            if(tw<=limit)
            { i++;// increase the weight
              // count++;   
            }
             j--;//decrease the weight
            
                
        }
        return count;
    }
};