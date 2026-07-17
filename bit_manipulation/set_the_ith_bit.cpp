#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void set_the_ith_bit(int &n, int &i) {
        n = n | (1 << i);
    }
};

int main() {

    int n, i;
    cin >> n >> i;

    Solution sol;
    sol.set_the_ith_bit(n, i);
    cout << n;

    return 0;
}
