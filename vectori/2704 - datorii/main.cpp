#include <bits/stdc++.h>
using namespace std;

int a[10005], dp[10005], n;
/// dp[i] = suma maxima obtinuta din a[1..i]

int main()
{
    int i;
    ifstream fin("datorii.in");
    ofstream fout("datorii.out");
    fin >> n;
    for (i = 1; i <= n; i++)
        fin >> a[i];
    dp[2] = dp[1] = a[1];
    ///dp[2] = max(a[1], a[2]);
    for (i = 3; i <= n; i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    fout << dp[n] << "\n";
    fin.close();
    fout.close();
    return 0;
}
