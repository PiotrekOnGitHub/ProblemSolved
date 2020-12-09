#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

void digits(ull n, vector<ull> &vec) {
  if (0 <= n && n < 10) {
    vec.push_back(n);
  } else {
    vec.push_back(n % 10);
    digits(n / 10, vec);
  }
}

int main() {
  ull l, r, ret = 0;
  scanf("%lld %lld", &l, &r);
  for (ull i = l; i <= r; i++) {
    vector<ull> d; digits(i, d);
    int c = 0;
    ull *T = new ull[d.size()];
    for (ull j = 0; j < d.size(); j++) {
      if (d[j] != 0 && i % d[j] == 0) {
        T[j] = 1;
      }
      if (T[j] == 1) {
        c++;
      }
    }
    if (c == d.size()) ret++;
  }
  printf("%lld\n", ret);

  return 0;
}
