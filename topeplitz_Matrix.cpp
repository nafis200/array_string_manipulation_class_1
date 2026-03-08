
// 2d matrix

#include <bits/stdc++.h>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) 
{
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i = 1; i < row; i++){
        for(int j = 1; j < col; j++){
            if(matrix[i][j] != matrix[i - 1][j - 1]){
                return false;
            }
        }
    }

    return true;
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
  
  cout << isToeplitzMatrix(matrix) << "\n";
}