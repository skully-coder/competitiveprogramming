//gfg

class Solution
{
public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node *head)
    {
        // your code here
        if (!head)
            return false;

        Node *low = head;
        Node *high = head;

        while (high != NULL and high->next != NULL)
        {
            low = low->next;
            high = high->next->next;
            if (low == high)
            {
                return true;
            }
        }
        return false;
    }
};