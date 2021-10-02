class LLNode:
    def __init__(self, val, link=None):
        self.val = val
        self.link = link

def pallindrome(node):
    fast, slow = node, node
    while fast and fast.link:
        fast = fast.link.link
        slow = slow.link   #middle element finding
    right = None
    while slow:
        p = slow.link     #reversing second half
        slow.link = right
        right = slow
        slow = p
    left = node
    while left is not None and right is not None:
        if left.val != right.val:
            return False
        left = left.link
        right = right.link
    return True

n=list(map(int,input().split()))
head = None
p=head
for ele in n:
    nnode = LLNode(ele)
    if head == None:
        head = nnode
    else:
        p.link = nnode
    p = nnode

if pallindrome(head) :
    print("Linked list is a Pallindrome")
else:
    print("Not a Pallindrome")