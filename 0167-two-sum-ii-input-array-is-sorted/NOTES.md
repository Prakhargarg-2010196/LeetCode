When the data structure is sorted and indexes are in consideration the two pointers approach is best considered.
​
Also here we can say that the contribution to sum from left will be smaller and right would be larger.
Therefore two pointers are moved accordingly
1. if the sum<target move the left pointer++ // increase the sum.
2. If the sum>target move the right pointer-- // reduce the sum
3. if sum== target return i,j