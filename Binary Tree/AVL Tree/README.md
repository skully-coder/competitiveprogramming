# AVL with duplicate keys

Please refer below post before reading about AVL tree handling of duplicates.

How to handle duplicates in Binary Search Tree?
This is to augment AVL tree node to store count together with regular fields like key, left and right pointers. 
Insertion of keys 12, 10, 20, 9, 11, 10, 12, 12 in an empty Binary Search Tree would create following. 
```
          12(3)
       /        \
     10(2)      20(1)
    /    \       
 9(1)   11(1)   
```
Count of a key is shown in bracket

Below is implementation of normal AVL Tree with count with every key. This code basically is taken from code for insert and delete in AVL tree. The changes made for handling duplicates are highlighted, rest of the code is same.

The important thing to note is changes are very similar to simple Binary Search Tree changes. 