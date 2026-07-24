#include <bits/stdc++.h>
using namespace std;

class Stack
{ // using linked list
public:
    list<int> ll;

    void push(int i)
    {
        ll.push_front(i);
    }

    void pop()
    {
        ll.pop_front();
    }

    int top()
    {
        return ll.front();
    }

    bool empty()
    {
        return ll.empty();
    }

    void print()
    {
        for (auto &i : ll)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;

    cout << s.empty() << endl;
    s.push(10);
    s.push(20);
    s.push(30);

    s.print();
    cout << s.top() << endl;

    s.pop();
    cout << s.top() << endl;

    s.print();
    cout << s.empty() << endl;

    return 0;
}