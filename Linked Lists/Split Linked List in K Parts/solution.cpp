#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
};

// Function to split the given linked list

vector<Node *> splitListToParts(Node *head, int k)
{
    int n = 0;
    Node *ptr = head;
    while (ptr)
    {
        n++;
        ptr = ptr->next;
    }
    vector<Node *> ans;

    if (n <= k)
    {
        ptr = head;
        ans.push_back(ptr);
        while (ptr)
        {
            if (ptr->next)
            {
                ans.push_back(ptr->next);
                ptr->next = NULL;
                ptr = ans.back();
                k--;
            }
            else
                break;
        }
        k--;
        while (k--)
            ans.push_back(NULL);
    }
    else
    {
        int r = n % k;
        ptr = head;
        int d = n / k;
        int i = 1;
        ans.push_back(ptr);
        while (ptr)
        {
            if (i == d && r == 0)
            {

                i = 1;
                if (ptr->next)
                {
                    ans.push_back(ptr->next);
                    ptr->next = NULL;
                    ptr = ans.back();
                    continue;
                }
            }
            else if (r != 0 && i == d + 1)
            {
                r--;
                i = 1;
                if (ptr->next)
                {
                    ans.push_back(ptr->next);
                    ptr->next = NULL;
                    ptr = ans.back();
                    continue;
                }
            }

            ptr = ptr->next;
            i++;
        }
    }

    return ans;
}

// Function to print the linked list

void print(Node *head)
{
    struct Node *temp = head;
    cout << "The given linked list : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to print the K parts of the linked list

void print_the_parts(Node *head, int k)
{
    vector<Node *> list = splitListToParts(head, k);
    for (int i = 0; i < list.size(); i++)
    {
        Node *ptr = list[i];
        cout << "Part " << i + 1 << " : ";
        while (ptr)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
}

// Function to append a node into the linked list

void append(Node **head_ref, int x)
{
    Node *new_node = new Node(x);
    Node *last = *head_ref;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}


//---------------------------------------------------- main -----------------------------------------------------------------

int main()
{
    // Formation of the linked list
    Node *head = new Node(1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);
    append(&head, 7);

    int k = 3;

    // Function to print linked list
    print(head);

    cout << "Spliting into " << k << " parts...........!!!!" << endl;
    // Function to print K parts of the linked list. This function internally calls the function splitListToParts to perform splitting
    print_the_parts(head, k);

    return 0;
}
