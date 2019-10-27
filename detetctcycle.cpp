#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void detectCycle(Node* head)
{
    Node *slow,*fast;
    slow=head;
    fast=slow->next;
    while(slow&&fast&&fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            cout<<"cycle detected";
            return;
        }
    }

}

int main()
{
    Node* head = new Node;
    head->next = new Node;
    head->next->next = new Node;
    head->next->next->next = new Node;
    head->next->next->next->next = head->next;
    detectCycle(head);
    return 0;
}