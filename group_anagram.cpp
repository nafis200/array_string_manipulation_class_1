#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  map<string, vector<string>> v;
  for (int i = 0; i < strs.size(); i++) {
    string s = strs[i];
    sort(s.begin(), s.end());
    v[s].push_back(strs[i]);
  }
  vector<vector<string>> ans;
  for (auto st : v) {
    vector<string> final;
    for (auto it : st.second) {
      final.push_back(it);
    }
    ans.push_back(final);
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  vector<string> strs;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    strs.push_back(s);
  }

  vector<vector<string>> ans = groupAnagrams(strs);

  for(auto it : ans){
     cout << "[ ";
     for(auto it1 : it){
        cout << it1 << " ";
     }
     cout << "]\n";
  }
}