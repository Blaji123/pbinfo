#include <bits/stdc++.h>
using namespace std;
ifstream f("fill.in");
ofstream g("fill.out");
int a[501][501];
void fill(int i, int j){
    a[i][j] = 0;
    if(a[i+1][j] == 1)
        fill(i+1, j);
    if(a[i-1][j] == 1)
        fill(i-1, j);
    if(a[i][j+1] == 1)
        fill(i, j+1);
    if(a[i][j-1] == 1)
        fill(i, j-1);
}
int main(){
    int n, m, insule = 0;
    f >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            f >> a[i][j];
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(a[i][j] == 1){
                insule++;
                fill(i, j);
            }
    g << insule;
    return 0;
}
