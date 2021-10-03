problem:-
Given a singly linked list we have to delete the middle of linked list.For example, if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.
If there are even nodes, then there would be two middle nodes, we need to delete the second middle element. For example, if given linked list is 1->2->3->4->5->6 then it should be modified to 1->2->3->5->6.
If the input linked list is NULL or has 1 node, then it should return NULL.



explaination:-
Firstly we have created a structure which creates a node when called.

then we created a temp variable which performs the task of head variable as we ccannot afford to change the value of head function 

then we created a while loop which shifts the pointer temp to its next and updates itself.

then we stored value of temp's next's next to temps's next.

finally we returned the value of head which can be used to print the final updated linked list