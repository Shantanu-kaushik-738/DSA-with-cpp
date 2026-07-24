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

class Queue
{ // using linked list
    Node *head;
    Node *tail;

public:
    Queue()
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
            tail->next = temp;
            tail = temp;
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
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}