#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int v) {
        val = v;
        next = NULL;
    }
};

void insertAtStart(Node* &head, int v) {
    Node *n = new Node(v);
    if (head == NULL) {
        head = n;
        return;
    }
    n->next  = head;
    head = n;
}

Node* midOfLL(Node* head) {
    if (head == NULL)
        return head;
    if (head->next == NULL)
        return head;

    Node* s = head;
    Node* f = head->next;

    while (f != NULL && f->next != NULL) {
        s = s->next;
        f = f->next;
        f = f->next;
    }
    return s;
}

int main() {
    Node* head = NULL;
    insertAtStart(head, 6);
    insertAtStart(head, 5);
    insertAtStart(head, 4);
    insertAtStart(head, 3);
    insertAtStart(head, 2);
    insertAtStart(head, 1);

    Node* mid = midOfLL(head);
    cout << mid->val << endl;
}