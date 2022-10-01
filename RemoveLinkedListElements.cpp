#include <iostream>
#include <string>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
};

ListNode *removeElements(ListNode *head, int val)
{
    // If the list is empty, just return the empty list
    if (!head)
        return head;

    // pointer for deallocating the memory
    ListNode *del;

    // if the first element (or more than 1 starting elements) is/are the target element
    while (head != NULL && head->val == val)
    {
        del = head;
        head = head->next;
        delete del;
    }

    // pointer to keep record of the elements other than head (we have to return head)
    ListNode *temp = head;
    //  checking the rest of the list ( for target value )
    while (temp && temp->next)
    {
        // if found the target
        if (head != NULL && temp->next->val == val)
        {
            del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
        // if not found the target, just move to next node
        else
        {
            temp = temp->next;
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
    two->val = 2;
    three->val = 6;
    four->val = 3;
    five->val = 4;
    six->val = 5;
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

    removeElements(head, 6);
    printList(head);

    return 0;
}