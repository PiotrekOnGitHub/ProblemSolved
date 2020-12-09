#include <bits/stdc++.h>

using namespace std;

bool cc(char c, string s) {
  int n = s.length();
  for (int i = 0; i < n; i++) {
    if (c == s[i]) return true;
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; string bi, bj;
  cin >> n;
  cin >> bi;
  cin >> bj;
  for (int i = 0; i < n; i++) {
    if (cc(bi[0], bj)) {
      continue;
    } else {
      cout << "NIE\n";
      return 0;
    }
  }
  cout << "TAK\n";
  return 0;
}
