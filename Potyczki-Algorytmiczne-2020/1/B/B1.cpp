#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, z;
    const int Z = 3;
    scanf("%d %d", &n, &m);
    int *T = new int[n];
    for (int i = 0; i < n; i++)
    {
        T[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int l, r, k;
        scanf("%d %d %d", &l, &r, &k);
        for (int j = l - 1; j <= r - 1; j++)
        {
            T[j] += k;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (T[i] == Z) {
            z++;
        }
    }
    z += 1;
    cout << z << "\n";
    return 0;
}