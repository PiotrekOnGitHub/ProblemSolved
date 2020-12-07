#include <bits/stdc++.h>
using namespace std;

#define vs vector<string>

void cn(char c, int* T) {
  switch(c) {
    case '1':
      T[0]++;
      break;
    case '2':
      T[1]++;
      break;
    case '3':
      T[2]++;
      break;
    case '4':
      T[3]++;
      break;
    case '5':
      T[4]++;
      break;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  const int L = 5;
  int n;
  vs strings;
  cin >> n;
  int A[5] = {0, 0, 0, 0, 0};
  int B[5] = {0, 0, 0, 0, 0};
  int C[5] = {0, 0, 0, 0, 0};
  for (int i = 0; i < n; i++) {
     string s; cin >> s;
     strings.push_back(s);
     if (s[1] == 'A') cn(s[0], A);
     if (s[1] == 'B') cn(s[0], B);
     if (s[1] == 'C') cn(s[0], C);
  }
  int K = 0;
  for (int i = 0; i < L - 1; i++) {
    if (A[i] >= 1 && B[i] >= 1 && C[i] >= 1) {
      K++;
    }
  }
  if (A[L - 1] >= 2 && B[L - 1] >= 2 && C[L - 1] >= 2) K++;
  cout << (K == 5 ? "TAK\n" : "NIE\n");
  return 0;
}
