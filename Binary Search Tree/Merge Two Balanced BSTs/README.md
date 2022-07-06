# Merge Two Balanced Binary Search Trees

You are given two balanced binary search trees e.g., AVL or Red-Black Tree. Write a function that merges the two given balanced BSTs into a balanced binary search tree. Let there be m elements in the first tree and n elements in the other tree. Your merge function should take O(m+n) time.
In the following solutions, it is assumed that the sizes of trees are also given as input. If the size is not given, then we can get the size by traversing the tree (See this).

Method 1 (Insert elements of the first tree to second):

Take all elements of first BST one by one, and insert them into the second BST. Inserting an element to a self balancing BST takes Logn time (See this) where n is size of the BST. So time complexity of this method is Log(n) + Log(n+1) … Log(m+n-1). The value of this expression will be between mLogn and mLog(m+n-1). As an optimization, we can pick the smaller tree as first tree.

Method 2 (Merge Inorder Traversals):

Do inorder traversal of first tree and store the traversal in one temp array arr1[]. This step takes O(m) time. 
Do inorder traversal of second tree and store the traversal in another temp array arr2[]. This step takes O(n) time. 
The arrays created in step 1 and 2 are sorted arrays. Merge the two sorted arrays into one array of size m + n. This step takes O(m+n) time. 
Construct a balanced tree from the merged array using the technique discussed in this post. This step takes O(m+n) time.
Time complexity of this method is O(m+n) which is better than method 1. This method takes O(m+n) time even if the input BSTs are not balanced. 