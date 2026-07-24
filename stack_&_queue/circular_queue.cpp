#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int *arr;
    int curr, cap;
    int f, r; // front ,rear

public:
    CircularQueue(int size)
    {
        cap = size;
        curr = 0;
        arr = new int[cap];
        f = 0;
        r = -1;
    }

    void push(int i)
    {
        if (curr == cap)
        {
            cout << "CircularQueue is Full" << endl;
            return;
        }

        r = (r + 1) % cap;
        arr[r] = i;
        curr++; // size
    }

    void pop()
    {
        if (empty())
        {
            cout << "CircularQueue is Empty" << endl;
            return;
        }

        f = (f + 1) % cap;
        curr--;
    }

    int front()
    {
        if (empty())
        {
            cout << "CircularQueue is Empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool empty()
    {
        return curr == 0;
    }

    void print()
    {
        for (int i = 0; i < cap; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);

    cq.pop();
    cq.push(4);
    cq.print(); // for arr element

    while (!cq.empty())
    { // for queue
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;

    return 0;
}