class LLNode:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next

def pallindrome(node):
    fast, slow = node, node
    while fast and fast.next:
        fast = fast.next.next
        slow = slow.next   #middle element finding
    right = None
    while slow:
        p = slow.next     #reversing second half
        slow.next = right
        right = slow
        slow = p
    left = node
    while left is not None and right is not None:
        if left.val != right.val:
            return False
        left = left.next
        right = right.next
    return True

n=list(map(int,input().split()))
head = None
p=head
for ele in n:
    nnode = LLNode(ele)
    if head == None:
        head = nnode
    else:
        p.next = nnode
    p = nnode

if pallindrome(head) :
    print("Linked list is a Pallindrome")
else:
    print("Not a Pallindrome")