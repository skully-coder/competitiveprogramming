
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *fastPointer = head;
        ListNode *slowPointer = head;

        for (int i = 0; i < n; i++)
        {
            fastPointer = fastPointer->next;
        }
        if (fastPointer == NULL)
            return head->next;
        while (fastPointer->next != NULL)
        {
            fastPointer = fastPointer->next;
            slowPointer = slowPointer->next;
        }
        slowPointer->next = slowPointer->next->next;
        return head;
    }
};

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s;
    ListNode *result = s.removeNthFromEnd(head, 2);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
    return 0;
}
