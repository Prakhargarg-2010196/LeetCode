**Alternative approaches**
Instead using my own function I could have used the count function as follows
```
count(begin(messages[i]), end(messages[i]), ' ')+1;
```
Also the condtion  can further be simply written as without using if else construct.
```
mp[senders[i]]+=words;
```
Refer to this approach for details: [other approach](https://leetcode.com/problems/sender-with-largest-word-count/discuss/2084181/C++-oror-MAP-oror-Easy)