#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int convert_to_decimal(string s) {
        int num = 0;
        int p2 = 1;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') num += p2;
            p2 *= 2;
        }
        return num;
    }
};

int main() {

    string s;
    cin >> s;

    Solution sol;
    cout << sol.convert_to_decimal(s);

    return 0;
}