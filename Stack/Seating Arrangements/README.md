In the cinema seats can be represented as the table with 𝑛 rows and 𝑚 columns. The rows are numbered with integers from 1 to 𝑛. The seats in each row are numbered with consecutive integers from left to right: in the 𝑘-th row from 𝑚(𝑘−1)+1 to 𝑚𝑘 for all rows 1≤𝑘≤𝑛.
There are 𝑛𝑚 people who want to go to the cinema to watch a new film. They are numbered with integers from 1 to 𝑛𝑚. You should give exactly one seat to each person.

It is known, that in this cinema as lower seat index you have as better you can see everything happening on the screen. 𝑖-th person has the level of sight 𝑎𝑖. Let's define 𝑠𝑖 as the seat index, that will be given to 𝑖-th person. You want to give better places for people with lower sight levels, so for any two people 𝑖, 𝑗 such that 𝑎𝑖<𝑎𝑗 it should be satisfied that 𝑠𝑖<𝑠𝑗.

After you will give seats to all people they will start coming to their seats. In the order from 1 to 𝑛𝑚, each person will enter the hall and sit in their seat. To get to their place, the person will go to their seat's row and start moving from the first seat in this row to theirs from left to right. While moving some places will be free, some will be occupied with people already seated. The inconvenience of the person is equal to the number of occupied seats he or she will go through.

Let's consider an example: 𝑚=5, the person has the seat 4 in the first row, the seats 1, 3, 5 in the first row are already occupied, the seats 2 and 4 are free. The inconvenience of this person will be 2, because he will go through occupied seats 1 and 3.

Find the minimal total inconvenience (the sum of inconveniences of all people), that is possible to have by giving places for all people (all conditions should be satisfied).