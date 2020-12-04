#include <bits/stdc++.h>

using namespace std;

vector<int> dgt(int n) {
  vector<int> ret;
  while (n > 0) {
    ret.push_back(n % 10);
    n = (int) n / 10;
  }
  return ret;
}

int main() {
  int l, r, ret = 0;
  scanf("%d %d", &l, &r);
  for (int i = l; i < r; i++) {
    vector<int> d = dgt(i);
    int *T = new int[d.size()];
    for (int j = 0; j < d.size(); j++) {
      if (d[j] != 0) {
        if(i % d[j] == 0) {
          T[j] = 1;
        }
      }
    }
    int c = 0;
    for (int i = 0; i < d.size(); i++) {
        if (T[i] == 1) {
          c++;
        }
    }
    if (c == d.size()) ret++;
  }
  printf("%d\n", ret);

  return 0;
}
