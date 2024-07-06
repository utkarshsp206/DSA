#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            return 1;
        }
        return 0;
    }
};

int main() {
Solution s;
Node *head = new Node(5);
Node *Node1 = new Node(6);
Node *Node2 = new Node(6);
Node *Node3 = new Node(6);
head->next = Node1;
Node1->next=Node2;
Node2->next=Node3;
Node3->next=Node2;

cout<<s.detectLoop(head);

return 0;
}