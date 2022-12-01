#include <bits/stdc++.h>
using namespace std;
ifstream f("graf_complet.in");
ofstream g("graf_complet.out");
int a[102][102];
int main()
{
    int n , m;
    f >> n;
    for(int i = 0 ; i < n ; ++i)
    {
        int cnt = 0;
        f >> m;
        for(int i = 0 ; i < m ; ++i)
            for(int j = 0 ; j < m ; ++j)
                f >> a[i][j];
        for(int i = 0 ; i < m ; ++i)
            for(int j = 0 ; j < m; ++j)
                if(a[i][j]==0)cnt++;
        if(cnt <= m) g << "DA" << endl;
        else g << "NU" << endl;
        for(int i = 0 ; i < m ; ++i)
            for(int j = 0 ; j < m; ++j)
                a[i][j]=0;
    }
}
