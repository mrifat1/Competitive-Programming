// find nth element from last
#include <bits/stdc++.h>
using namespace std;
struct LL
{
    int data;
    LL *next;
};
void insertAtBeginning(struct LL **head, int dataToBeInserted)
{
    struct LL *curr = new LL;

    curr->data = dataToBeInserted;
    curr->next = NULL;

    if (*head == NULL)
        *head = curr;

    else
    {
        curr->next = *head;
        *head = curr;
    }
}
struct LL *nthNodeFromEnd(struct LL **head, int n)
{
    struct LL *first = *head, *second = *head;
    for (int i = 1; i < n; i++)
    {
        if (second)
            second = second->next;
        else
            break;
    }
    if (second == NULL)
    {
        cout << "List has less than specified number of nodes\n";
        return NULL;
    }
    while (second->next != NULL)
    {
        first = first->next;
        second = second->next;
    }

    return first;
}
void display(struct LL **head)
{
    struct LL *temp = *head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
            cout << temp->data << " ->";
        else
            cout << temp->data;

        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    struct LL *head = NULL;

    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 16);
    insertAtBeginning(&head, 15);
    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 23);

    display(&head);

    int N = 3; // number of node whose value is to be known

    struct LL *NthFromEnd = nthNodeFromEnd(&head, N);
    if (NthFromEnd == NULL)
    {
    }

    else
        cout << N << " th node from end is " << NthFromEnd->data << endl;

    return 0;
}