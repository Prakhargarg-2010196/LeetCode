string temp;
class Solution {

    public:
    
    bool static comp(char a,char b){
        int i=temp.find(a);
        int j=temp.find(b);
        if(i<j)
            return true;
        else return false;
    }
    string customSortString(string order, string s) {
        temp=order;
        sort(s.begin(),s.end(),comp);
        return s;
    }
};