**First Pointer**
This pointer is used just to reach the end of the list.
**Second Pointer**
This pointer points the location of the n-1th node which has to be removed.
***Approach:***
In this approach the **FirstPointer** is moved to the distance **n** apart from the **SecondPointer** so that when after each moves one unit afterwards then when the FirstPointer reaches the end of the list then simultaneously the SecondPointer reaches at the n-1th node which is required in this question.
Also if the **n is equal to the length of the list** then simply return the  **head  moved ahead one time** because the FirstPointer in this case would become null at the first go when we are **moving it n units apart.** So the head would
​
![Image Depicting the movement of two pointers](https://i.imgur.com/BSiLKj0.pnghttp://)