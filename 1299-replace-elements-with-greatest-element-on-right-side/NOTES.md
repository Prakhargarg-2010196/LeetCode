Learnings
​
When **max element to right of elements has to be found** **traversing the array from right is profitable** as then we dont have to find the max element among n-i elements to the right as they already have been traversed.
Similar approach is done **when max element to left of the elements is to be found ,then the array has to be traversed from the left**.
Time complexity reduces from O(n<sup>2</sup>) to O(n) as n-i elements don't need to be traversed.
​
exchange function usage:
The exchange function in utlity library provides us with better approach to exchange the value from old value to new value also while returning the old value to us.
```c++
// Syntax
exchange(oldValue,newValue);// returns oldValue
```