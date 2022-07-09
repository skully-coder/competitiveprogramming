/* Linked List Node Structure */
struct Node {
    int data; //integer type data
    struct Node* next; //self referential
}

// Two heads of LL are passes as parameters to the function and new LL head address is returned by function.
struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    struct Node *head1 = a, *head2 = b, *head = NULL, *temp = NULL;
    if (head1->data < head2->data)
    {
        head = head1;
        head1 = head1->next;
    } else {
        head = head2;
        head2 = head2->next;
    }
    temp = head;
    while (head1 && head2)
    {
        if (head1->data < head2->data)
        {
            temp->next = head1;
            temp = temp->next;
            head1 = head1->next;
        } else {
            temp->next = head2;
            temp = temp->next;
            head2 = head2->next;
        }
    }
    if (head1)
    {
        while (head1) {
            temp->next = head1;
            temp = temp->next;
            head1 = head1->next;
        }
    } else if (head2)
    {
        while (head2) {
            temp->next = head2;
            head2 = head2->next;
            temp = temp->next;
        }
    }
    return head;
}
