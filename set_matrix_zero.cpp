#include <bits/stdc++.h>
using namespace std;

// time complexity o(n^2) space complexity o(n^2)

// void rotate(vector<vector<int>>& matrix) {
//   int n = matrix.size();
//   int m = matrix[0].size();
//   vector<int> rows, cols;

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       if (matrix[i][j] == 0) {
//         rows.push_back(i);
//         cols.push_back(j);
//       }
//     }
//   }

//   for (int i = 0; i < rows.size(); i++) {
//     for (int j = 0; j < m; j++) {
//       matrix[rows[i]][j] = 0;
//     }
//   }
//   for (int i = 0; i < cols.size(); i++) {
//     for (int j = 0; j < n; j++) {
//       matrix[j][cols[i]] = 0;
//     }
//   }
// }

void rotate(vector<vector<int>>& matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        matrix[0][j] = 0;
        matrix[i][0] = 0;
      }
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (matrix[i][0] == 0) {
          matrix[i][j] = 0;
      }
      if (matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> matrix;
  for (int i = 1; i <= n; i++) {
    vector<int> ma;
    for (int j = 1; j <= m; j++) {
      int x;
      cin >> x;
      ma.push_back(x);
    }
    matrix.push_back(ma);
  }
  rotate(matrix);
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[0].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
}