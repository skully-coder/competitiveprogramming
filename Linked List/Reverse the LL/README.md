# Reverse Linked List

## Problem Statement

Given the head of a singly linked list, reverse the list, and return the reversed list.

# Examples

1)
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

2)
Input: head = [1,2]
Output: [2,1]

3)
Input: head = []
Output: []

# Constraints

The number of nodes in the list is the range [0, 5000].

-5000 <= Node.val <= 5000

## Explanation of solution

# What is a linked list?

A linked list is just a way of storing data in a line where each item is its own object and holds a connection, or "link", to the next item. It's like an alternative to arrays that keep all their elements squished together in one block of memory and can't change size once created.

In a linked list, elements are stored in nodes that can be dynamically allocated and linked together using pointers. This allows linked lists to be resized easily and makes it possible to efficiently insert or remove elements anywhere in the list. The elements can be of any data type, including other objects or structures.

# How do I reverse a linked list?

Reversing a linked list involves swapping the pointers of the nodes in the list so that the order of the elements is reversed. Here's the basic logic behind it:

Initialize three pointers: "previous", "current", and "next".

Set "current" to the head of the list, "previous" to NULL, and "next" to NULL.

In a loop, do the following:
a. Store the value of "next" in a temporary variable.
b. Set "next" to the value of "current.next".
c. Set "current.next" to the value of "previous".
d. Set "previous" to the value of "current".
e. Set "current" to the value of the temporary "next".

After the loop terminates, set the head of the list to the value of "previous".

# Time Complexity

O(n), where n is the number of nodes in the list

