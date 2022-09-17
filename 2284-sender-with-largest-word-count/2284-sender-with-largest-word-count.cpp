class Solution {
public:
//     To return the number of words in a string
    int numberOfWords(string message){
        int count=0;
        for(int i=0;i<message.length();i++)
        {
            if(message[i]==' ')
                count++;
        }
        return count+1;
    }
    
    string largestWordCount(vector<string>& messages, vector<string>& senders){
            
//         Create a map to hold the messenger to total messages.
            map<string,int> mp;
        
            for(int i=0;i<messages.size();i++){
                
//              Number of words in current word
                int wordsInCurrentMessage=numberOfWords(messages.at(i));
                
//              If the messenger is not present in the map insert it
                if(mp.find(senders.at(i))==mp.end()){
                
                pair<string,int> sender={senders.at(i),wordsInCurrentMessage};
                mp.insert(sender);
                }
                
//              If the messenger is present in the map add to the elements' previous number of messages.
                else{
                    
                    // cout<<senders.at(i)<<mp.at(senders.at(i))<<wordsInCurrentMessage;
                    
                    mp.at(senders.at(i))=wordsInCurrentMessage+mp.at(senders.at(i));
                    
                    }                
                                    
            }   
       
//          Use max_element from algorithm to find the element with max value using compartor function
//          max_element returns an iterator;
           auto pr = std::max_element(mp.begin(), mp.end(), [](const auto &x, const auto &y) {
                    return x.second <= y.second;
                });
        return pr->first;
    }
};