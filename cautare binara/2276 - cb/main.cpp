
#include <bits/stdc++.h>
using namespace std;
const int MaxN = 200001;
int a[MaxN], n, T;
int BsMax(int y); // ret poz celui mai mare numar din sirul a[] mai mic sau egal cu y
int BsMin(int x); // ret poz celui mai mic numar din sirul a[], mai mare sau egal cu x
int main()
{
    cin >> n >> T;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);
    int x, y, cnt;

    for (int i = 1; i <= T; ++i)
    {
        cin >> x >> y;
        int p2 = BsMax(y);
        int p1 = BsMin(x);
        if (p1 == -1)
            cout << 0 << '\n';
        else
            cout << p2 - p1 + 1 <<  '\n';

    }

}
int BsMin(int v)
{
    int l = 0, r = n - 1, m;
    int poz = -1;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] >= v)
        {
            poz = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return poz;
}
int BsMax(int v)
{
    int l = 0, r = n - 1, m;
    int poz = -1;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] <= v)
        {
            poz = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return poz;
}
