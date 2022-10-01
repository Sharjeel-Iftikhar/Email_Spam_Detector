#include <iostream>
#include <string>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *curr_node = head;
    ListNode *del;

    while (curr_node && curr_node->next)
    {
        ListNode *next_node = curr_node->next;
        if (curr_node->val == next_node->val)
        {
            del = next_node;
            curr_node->next = next_node->next;
            delete del;
        }
        else
        {
            curr_node = next_node;
        }
    }
    return head;
}

// Printing the linked list ( Output )
void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    /* Initialize nodes */
    struct ListNode *head;
    struct ListNode *one = NULL;
    struct ListNode *two = NULL;
    struct ListNode *three = NULL;
    struct ListNode *four = NULL;
    struct ListNode *five = NULL;
    struct ListNode *six = NULL;
    struct ListNode *seven = NULL;

    /* Allocate memory */
    one = new ListNode;
    two = new ListNode;
    three = new ListNode;
    four = new ListNode;
    five = new ListNode;
    six = new ListNode;
    seven = new ListNode;

    /* Assign data values */
    one->val = 1;
    two->val = 1;
    three->val = 2;
    four->val = 3;
    five->val = 3;
    six->val = 6;
    seven->val = 6;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = NULL;

    /* Save address of first node in head */
    head = one;

    deleteDuplicates(head);
    printList(head);

    return 0;
}