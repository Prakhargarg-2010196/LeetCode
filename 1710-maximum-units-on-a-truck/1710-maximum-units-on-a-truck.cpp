class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        multimap<int,int> boxUnits;
        int i=0,maxUnits=0;
        while(i<boxTypes.size())
        {
            boxUnits.insert(pair<int,int>(boxTypes.at(i).at(1),boxTypes.at(i).at(0)));
            i++;
        }
        for(auto it=boxUnits.rbegin();it!=boxUnits.rend();it++)
        {   cout<<it->first<<" "<<it->second<<endl;
            if(truckSize>0)
            { if(truckSize>=(it->second))
                {   maxUnits+=(it->second)*(it->first);
                    truckSize-=it->second;
                    cout<<maxUnits<<" "<<truckSize<<endl;
                }     
                else 
                {   maxUnits+=(truckSize)*(it->first);
                    truckSize=0;   
                    cout<<maxUnits<<" "<<truckSize<<endl;
                }
            }
        }
        
        
        
        
        // for(auto it:boxUnits)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        return maxUnits;
    }
};