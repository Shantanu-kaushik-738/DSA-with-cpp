#include <bits/stdc++.h>
using namespace std;

class Stack
{ // using list
public:
    list<int> l;

    void push(int i)
    {
        l.push_front(i);
    }

    void pop()
    {
        l.pop_front();
    }

    int top()
    {
        return l.front();
    }

    bool empty()
    {
        return l.empty();
    }

    void print()
    {
        for (auto &i : l)
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