#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

     Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};

int main()
{
    Node *head = new Node(50);
    head->next = new Node(20);
    head->next->next = new Node(15);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(10);
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

    if (low != high)
    {
        cout << "not found";
        return 0;
    }

    low = head;
    while (low != high)
    {
        low = low->next;
        high = high->next;
    }
    cout << low->data << " ";
}
