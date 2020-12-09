#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vi vector<int>

void input(int n, int *T)
{
    for (int i = 0; i < n; i++)
    {
        int k; cin >> k;
        T[i] = k;
    }
}

int l(int n) { 
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s - 1;
}

int main()
{
    int n, c, s = 0; vi r;
    cin >> n;
    c = l(n);
    int *T = new int[n];
    int *R = new int[c];
    input(n, T);
    cout << "\n";
    return 0;
}