#include <bits/stdc++.h>
using namespace std;
ifstream fin ("lantq.in");
ofstream fout ("lantq.out");
const int nMAX = 20;
int n, m, q;
bool gf[nMAX + 1][nMAX + 1];
bool viz[nMAX + 1];
void dfs(int nod, vector<int> &stiv)
{
    if (nod == q)
    {
        for (int a : stiv)
            fout << a << ' ';
        fout << q << '\n';
        return;
    }
    viz[nod] = 1;
    for (int nex = 1; nex <= n; ++nex)
        if (gf[nod][nex] && !viz[nex])
        {
            stiv.push_back(nod);
            dfs(nex, stiv);
            stiv.pop_back();
        }
    viz[nod] = 0;
}
int main()
{
    fin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int a, b;
        fin >> a >> b;
        gf[a][b] = gf[b][a] = 1;
    }
    fin >> q;
    vector<int> stiv;
    for (int i = 1; i <= n; ++i)
        if (i != q)
            dfs(i, stiv);
    if (fout.tellp() == 0)
        fout << "NU EXISTA";
}

