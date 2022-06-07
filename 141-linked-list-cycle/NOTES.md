# This is a approach used to find the cycle in the linked list.

The error occuring in my case was that I took **while(fast->next!=NULL and fast!=NULL)**
which instead should be **while(fast->next!=NULL and fast->next->next!=NULL)** because the fast is update each time 
with expression 
## fast=fast->next->next;
