<h1>String Reversal</h1>
<br>
String reversal is a basic problem which can help us to understand the <b> fundamental of recursion.</b>

<h2>Q. Write a program which reverse the string recursively.</h2>

In the string reversal function, two elements are swapped such that : 
<br>
<br>
left = k
<br>
right = (len(string)-1) - k
<br>
<br>
string[left] swapped with string[right].
<br>
<br>
<i>The first element from left is swapped with first element of right.</i>. Here, <b>k</b> will be increasing after every recursive call which will continue till <b>left</b> is less than equal to <b>right</b>.
<br>
<br>
For string "Srijan" the swap will be as followed: <br> <br>
  0th: Srijan <br>
  1st: <i>n</i>rija<i>S</i> <br>
  2nd: <i>na</i>ij<i>rS</i> <br>
  3rd: <i>najirS</i>  <br>
