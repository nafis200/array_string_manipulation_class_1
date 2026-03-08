#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
  vector<int> ans;
  int row = matrix.size();
  int col = matrix[0].size();

  int top = 0, left = 0;
  int right = col - 1, bottom = row - 1;

  while (top <= bottom && left <= right) {
    for (int i = left; i <= right; i++) {
      ans.push_back(matrix[top][i]);
    }
    top++;
    if (top > bottom) {
      break;
    }
    for (int i = top; i <= bottom; i++) {
      ans.push_back(matrix[i][right]);
    }
    right--;

    if (right < left) {
      break;
    }

    for (int i = right; i >= left; i--) {
      ans.push_back(matrix[bottom][i]);
    }
    bottom--;
    if (bottom < top) {
      break;
    }
    for (int i = bottom; i >= top; i--) {
      ans.push_back(matrix[i][left]);
    }
    left++;
    if (left > right) {
      break;
    }
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> matrix;
  for (int i = 0; i < n; i++) {
    vector<int> ans;
    for (int j = 0; j < m; j++) {
      int x;
      cin >> x;
      ans.push_back(x);
    }
    matrix.push_back(ans);
  }
  vector<int> ans1 = spiralOrder(matrix);
  for (auto it : ans1) {
    cout << it << " ";
  }
}