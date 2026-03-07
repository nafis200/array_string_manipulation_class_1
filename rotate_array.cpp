#include <bits/stdc++.h>
using namespace std;

// time complexity o(n) space complexity o(1)

void rotate(vector<int>& nums, int k) {
  reverse(nums.begin(), nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;

  vector<int> nums;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    nums.push_back(x);
  }
  rotate(nums, k);

  for (auto it : nums) {
    cout << it << " ";
  }
}