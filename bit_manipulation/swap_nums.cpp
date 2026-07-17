#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void swap_nums(int& a, int& b) {
       a = a ^ b; 
       b = a ^ b; // (a ^ b) ^ b = a
       a = a ^ b; // (a ^ b) ^ a = b
    }
};

int main() {

    int a, b;
    cin >> a >> b;

    Solution sol;
    sol.swap_nums(a, b);
    cout << a << " " << b;

    return 0;
}
