#include <bits/stdc++.h>
using namespace std;

// type 1 sort time complexity o(nlogn) space o(1)

// bool isAnagram(string s, string t) {
//   sort(s.begin(), s.end());
//   sort(t.begin(), t.end());

//   if (s == t) {
//     return true;
//   }
//   return false;
// }

// time complexity o(n) space o(n)

bool isAnagram(string s, string t) {
  int freq[30] = {0};
  for (int i = 0; i < (int)s.size(); i++) {
    int x = s[i] - 'a';
    freq[x]++;
  }

  for (int i = 0; i < (int)t.size(); i++) {
    int x = t[i] - 'a';
    freq[x]--;
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i] != 0) {
      return false;
    }
  }
  return true;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s, t;
  cin >> s >> t;
  cout << isAnagram(s, t) << "\n";
}