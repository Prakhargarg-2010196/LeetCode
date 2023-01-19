class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int i=0,j=n-1,count=0;
        while(i<=j){
            int tw=people[i]+people[j];
            if(tw<=limit)
            {   count++;// count collective boats
                i++;// add the light person
                j--;// add the heavy person  
            }
            else{
                count++;//count the removed person to a single boat
                j--;// add heavy  person
            }  
            
            
                
        }
        return count;
    }
};