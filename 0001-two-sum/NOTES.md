```
Explanation:
Solution 01:
We take an ans vector to store the result.
Taken 2 for loops: i will start from 0 & j will start from i+1 (i=0, j=i+1)
Simply we’ll add nums[i] & nums[j], if they are equal to target we’ll push i,j to our ans vector.
Finally we’ll return the ans vector.
Time complexity: O(n^2).
Solution 02:
We take an unordered_map to store the elements.
Find function in unordered_map take time Complexity: O(1) on average.
We iterate every element and if any point we find (target-current element) present in the map, then we’ll simply return the value of find element in the map & index of the current element.
We can use both find() & count().
If the value is not present in the map, then we’ll insert the value with its index. (mp[nums[i]]=i)
As per the question, each input would have exactly one solution, so we simply return {empty vector} at the end.
Time complexity: O(n).
Difference btw find and count function in map!
Since a map can only have at most one key, count will essentially stop after one element has been found. However, in view of more general containers such as multimaps and multisets, find is strictly better if you only care whether some element with this key exists, since it can really stop once the first matching element has been found.
In general, both count and find will use the container-specific lookup methods (tree traversal or hash table lookup), which are always fairly efficient. It's just that count has to continue iterating until the end of the equal-range, whereas find does not. Moreover, your code should document intent, so if you want to find something, use find.
Code:
//Solution 01:
class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
vector<int> ans;
for(int i=0; i<nums.size(); i++){
for(int j=i+1; j<nums.size();j++){
if(nums[i]+nums[j]==target){
ans.push_back(i);
ans.push_back(j);
break;
}
}