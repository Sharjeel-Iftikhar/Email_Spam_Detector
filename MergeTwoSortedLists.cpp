#include <iostream>
#include <string>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    // if list1 or list 2 happen to be NULL
    // we will simply return list2.
    if (l1 == NULL)
        return l2;

    if (l2 == NULL)
        return l1;

    ListNode *p1 = l1;
    ListNode *p2 = l2;
    ListNode *dummyNode = new ListNode;
    ListNode *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->val <= p2->val)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

int main()
{
    return 0;
}