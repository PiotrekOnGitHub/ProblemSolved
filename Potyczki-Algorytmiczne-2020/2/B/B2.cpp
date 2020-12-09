#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
void input(int n, int *T) {
  for (int i = 0; i < n; i++) {
    scanf("%d", &T[i]);
  }
}
int main() {
  int n, r = 0, tr = 0;
  cin >> n;
  int *T = new int[n];
  int *R = new int[n];
  input(n, T);
  bool start_counting = false;
  for (int i = 0; i < n; i++) {
    if (!start_counting) {
      if (T[i] > 0) {
        start_counting = true;
      }
    } else {
      if (T[i] > 0) {
        r = 0; start_counting = false;
      } else
      if (T[i] < 0) {
        start_counting = false;
      }
    }
    if (start_counting) r++;
  }
  cout << (n - r) << "\n";
  return 0;
}
