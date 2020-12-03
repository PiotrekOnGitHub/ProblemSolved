#include <iostream>

using namespace std;

int main() {
  int n, s;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int k;
    scanf("%d", &k);
    s += k;
  }
  printf("%d", s);
  return 0;
}
