#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
  int n = matrix.size();
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<vector<int>> matrix;
  for (int i = 1; i <= n; i++) {
    vector<int> ma;
    for (int j = 1; j <= n; j++) {
      int x;
      cin >> x;
      ma.push_back(x);
    }
    matrix.push_back(ma);
  }
  rotate(matrix);
  for(int i = 0; i < matrix.size(); i++){
    for(int j = 0; j < matrix.size(); j++){
        cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
}