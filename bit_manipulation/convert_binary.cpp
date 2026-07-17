#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert_to_binary(int n) {
        string res = "";

        while (n > 0) {
            if (n % 2) res += "1";
            else res += "0";
            n /= 2;
        }

        reverse(begin(res), end(res));
        return res;
    }
};

int main() {

    int n;
    cin >> n;

    Solution sol;
    cout << sol.convert_to_binary(n);

    return 0;
}