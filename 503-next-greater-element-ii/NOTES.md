Just one change from the normal approach is that the concept of circular array is included which means the array indexes are to be referred using the modulo operator % likewise the array must be resolved two times so the size is also increased twice
```
for(int i=1;i<2*size;i++)// twice size
nums[i%size]//use of modulo to detect the repeated indexes..
​
```