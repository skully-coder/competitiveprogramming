## Implementation of all the methods for Queue using both array and LinkedLists

Write a java program to implement an interface Queue which defines the basic operations needed to implement the queue data structure for integers. The Queue interface contains the following methods:-

enqueue(int item):- Adds an element to the end of the queue.<br/>
dequeue( ):- Removes and returns an element from the front of the queue.<br/>
isEmpty( ):- Returns true if the queue is empty.<br/>
isFull( ):- Returns true if the queue is full.<br/>
size( ):- Returns the number of elements in the queue.<br/>
display( ):- Displays the elements in the queue.<br/>
Create two classes ArrayQueue and ListQueue where class ArrayQueue is an array-based implementation of the Queue interface, and the class ListQueue is the linked-list implementation of the Queue interface. <br/> Create a test class TestQueue to test the operations of ArrayQueue and ListQueue.

NOTE: Do not use any inbuilt functions.

## Input Format

First line contains A < size of the array > or L

A < size of array > Use class ArrayQueue for the implementation of the queue<br/>
L - Use class ListQueue for the implementation of the queue<br/>
In the subsequent lines, you can use one of the options below:<br/>

E to insert an element at the end of the queue (format:- E < value >)<br/>
D to remove and print an element from the front of the queue. (format:- D)<br/>
P to print the elements in the queue (format:- P)<br/>
S to print the number of elements in the queue (format:- S )<br/>
Constraints

The elements in the queue are positive integers.

## Output Format

If the first line of the input contains A < size of array > , and if the size specified is not a positive integer (less than zero), print “InvalidSIZE” and terminate the program.<br/>
If the queue is empty and if the input option is D or P or S, then print “EmptyQueue”<br/>
If the first line of input contains character A , and if the queue is full; if the input option is E, then print “QueueFull”<br/>
If the input option is D, then print the value of the element removed.<br/>
If the input option is P, then print the elements in the queue separated by space.<br/>
If the input option is S, then print the number of the elements in the queue.<br/>
If the input option is Q, then print “End”, and terminate the program.<br/>

### Sample Input 0

A 4<br/>
E 10<br/>
E 20<br/>
E 30<br/>
E 40<br/>
E 50<br/>
P<br/>
S<br/>
D<br/>
D<br/>
D<br/>
D<br/>
D<br/>
Q<br/>


### Sample Output 0

QueueFull<br/>
10 20 30 40<br/>
4<br/>
10<br/>
20<br/>
30<br/>
40<br/>
EmptyQueue<br/>
End<br/>


### Sample Input 1

L<br/>
P<br/>
E 5<br/>
E 4<br/>
E 6<br/>
D<br/>
P<br/>
S<br/>
Q<br/>


### Sample Output 1

EmptyQueue<br/>
5<br/>
4 6<br/>
2<br/>
End<br/>

### Sample Input 2

A -10<br/>

### Sample Output 2

InvalidSIZE<br/>
