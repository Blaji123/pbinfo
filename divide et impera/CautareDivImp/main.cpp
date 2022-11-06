#include <bits/stdc++.h>
using namespace std;
bool gasesc(int elem, int a[], int st, int dr){
    if(st == dr)
        return a[st] == elem;
    else{
        int mij = (st + dr) / 2;
        return gasesc(elem, a, st, mij) || gasesc(elem, a, mij + 1, dr);
    }
}
int main()
{
    int n, m, a[1001], b[1001];
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> m;
    for(int i = 1; i <= m; ++i)
        cin >> b[i];
    for(int i = 1; i <= m; ++i)
        if(gasesc(b[i], a, 1, n))
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    return 0;
}
