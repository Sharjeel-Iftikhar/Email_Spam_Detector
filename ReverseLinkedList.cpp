// https://www.youtube.com/watch?v=bjtMCwy_LMA&ab_channel=ApnaCollege

#include <iostream>
#include <string>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

// Reversing a linked list
ListNode *reverseList(ListNode *head)
{
    ListNode *next_node, *prev_node = NULL;
    while (head)
    {
        next_node = head->next;
        head->next = prev_node;
        prev_node = head;
        head = next_node;
    }
    return prev_node;
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
    two->val = 2;
    three->val = 3;
    four->val = 4;
    five->val = 5;
    six->val = 6;
    seven->val = 7;

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

    head = reverseList(head);
    printList(head);

    return 0;
}