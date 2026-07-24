#include <bits/stdc++.h>
using namespace std;

class Stack
{ // using vector / array
public:
    vector<int> v;

    void push(int i)
    {
        v.push_back(i);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    bool empty()
    {
        return v.empty();
    }

    void print()
    {
        for (auto &i : v)
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