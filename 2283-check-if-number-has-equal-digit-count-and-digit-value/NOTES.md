Here two things must be noted:
i+'0' can give both integer as the output and char as output depending on the type of data chosen as the output as in this case i have chosen the map from char to int thus it takes the value of character but if u do
cout<<i+'0'<<endl;
It would show the ascii value of the index taken here.
Thus it should be used carefully.
​
Similarly, nums[i]-'0' gives integer as chararcter(ascii)-0(ascii code) = integer(default)
but here too the output can be faulty due to chosen output type so use it carefully
​
**In most case use integer+'0' for integer to char conversion and take storage to be character While use character-'0' for  char to integer conversion and take storage to be integer although here integer is default so not much care has to be taken.
**
​