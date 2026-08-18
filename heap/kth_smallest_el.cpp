#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthSmallest(vector<int> &nums, int k)
    {
        priority_queue<int> pq; // max heap

        for (int &i : nums)
        {
            pq.push(i);
            if (pq.size() > k)
                pq.pop();
        }
        return pq.top();
    }
};

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution sol;
    cout << sol.findKthSmallest(nums, k);

    return 0;
}
