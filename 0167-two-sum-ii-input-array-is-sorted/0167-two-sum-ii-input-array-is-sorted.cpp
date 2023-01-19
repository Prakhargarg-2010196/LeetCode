class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
//         this problem uses two pointer approach as the array is sorted
//  and we have to find the indexes of the elements
        int n=numbers.size();
        int i=0,j=n-1;
        while(i<j){
            if(target==numbers[i]+numbers[j])
                return{i+1,j+1};
            else if(target<(numbers[i]+numbers[j]))
               j--;
            
            else if(target>(numbers[i]+numbers[j]))
                  i++;
        }
        return {};
    }
};