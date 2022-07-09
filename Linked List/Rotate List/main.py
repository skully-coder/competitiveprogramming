from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, nxt=None):
        self.val = val
        self.next = nxt


class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:

        if not head:  # if list is empty
            return head

        length, tail = 1, head

        while tail.next:  # Calculating the length of the list
            length += 1
            tail = tail.next

        # if k is greater than the length of the list then only rotate the list (k % length) times.
        k %= length

        # if k is equal to the length of linked list do not rotate the list as the list would end up the same as before
        if k == 0:
            return head

        cur = head
        for _ in range(length - k - 1):  # loop until you reach the (k - 1)th Node
            cur = cur.next

        nextNode = cur.next  # The kth Node
        cur.next = None  # Changing the next of (k - 1)th Node to None
        tail.next = head  # Changing the next of the last element of kth Node to head

        return nextNode
