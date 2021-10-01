//gfg

class Solution
{
public:
    //Function to remove a loop in the linked list.

    void removeLoop(Node *head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *low = head;
        Node *high = head;

        while (low != NULL and high != NULL and high->next != NULL)
        {
            low = low->next;
            high = high->next->next;
            if (low == high)
            {
                break;
            }
        }
        if (low == head)
        {
            while (high->next != low)
            {
                high = high->next;
            }
            high->next = NULL;
        }
        else if (low == high)
        {
            low = head;
            while (low->next != high->next)
            {
                low = low->next;
                high = high->next;
            }
            high->next = NULL;
        }
    }
};