#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void clear_the_ith_bit(int &n, int &i) {
        n = n & ~(1 << i);
    }
};

int main() {

    int n, i;
    cin >> n >> i;

    Solution sol;
    sol.clear_the_ith_bit(n, i);
    cout << n;

    return 0;
}
