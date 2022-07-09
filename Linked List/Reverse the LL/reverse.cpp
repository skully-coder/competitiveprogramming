//gfg
class Solution
{
public:
    //Function to reverse a linked list.
    struct Node *reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list

        Node *cur = head;
        Node *prev = NULL;
        Node *next;
        while (cur != NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        return head;
    }
};