#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int v)
    {
        data = v;
        next = NULL;
    }
};

class Stack
{ // using linked list
    Node *head;
    Node *tail;

public:
    Stack()
    {
        head = tail = NULL;
    }

    int push(int i)
    { // insert at tail
        Node *temp = new Node(i);

        if (empty())
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    void pop()
    {
        if (empty())
        {
            cout << "LL is empty" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;
    }

    int front()
    {
        if (empty())
        {
            cout << "LL is empty" << endl;
            return -1;
        }
        return head->data;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.front() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}