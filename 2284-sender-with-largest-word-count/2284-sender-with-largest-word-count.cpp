class Solution {
public:
    int numberOfWords(string message){
        int count=0;
        // cout<<message<<endl;
        for(int i=0;i<message.length();i++)
        {
            if(message[i]==' ')
                count++;
        }
        return count+1;
    }
    
    string largestWordCount(vector<string>& messages, vector<string>& senders)     {
            map<string,int> mp;
            for(int i=0;i<messages.size();i++){
                int wordsInCurrentMessage=numberOfWords(messages.at(i));
                if(mp.find(senders.at(i))==mp.end()){
                mp.insert({senders.at(i),wordsInCurrentMessage});
                }
                else{
 // cout<<senders.at(i)<<mp.at(senders.at(i))<<wordsInCurrentMessage;
                    mp.at(senders.at(i))=wordsInCurrentMessage+mp.at(senders.at(i));
                     }                
                                    
            }   
       
           auto pr = std::max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y) {
                    return x.second <= y.second;
                });
        return pr->first;
    }
};