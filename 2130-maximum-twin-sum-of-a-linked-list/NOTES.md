**Approach(similar to the [problem# 143](https://leetcode.com/problems/reorder-list/))**
​
```
Step 1: Find the middle of the list.
Step 2: Find the reverse of the second half of the list.
Step 3: Now that the list is split into two separate first half and second half list,
find the max  sum from the alternate nodes by traversing the nodes from both lists.(use std::max function)
```
​