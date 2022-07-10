#include<vector>
class Solution {
public:
    int countPoints(string rings) {
        int r[10]{0}, b[10]{0},g[10]{0};
        int count=0;
        for(int i=0;i<rings.length();i+=2)
        {   
            int rod=rings[i+1]-'0';
            if(rings[i]=='R')
                r[rod]++;
            else if(rings[i]=='G')
                g[rod]++;
            else if(rings[i]=='B')
                b[rod]++;
            
        }
        for(int i=0;i<10;i++)
        {   
            if(r[i]&&g[i]&&b[i])
                count++;
        }
        
        return count;
    }
};