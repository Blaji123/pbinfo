#include <bits/stdc++.h>
using namespace std;
ifstream f("moscraciun.in");
ofstream g("moscraciun.out");
int a[501][501];
void fill(int i, int j,int &nr){
    if(a[i][j]==3)
        nr++;
    a[i][j]=0;
    if(a[i+1][j] == 1 || a[i+1][j] == 3)
        fill(i+1, j,nr);
    if(a[i-1][j] == 1 || a[i-1][j] == 3)
        fill(i-1, j,nr);
    if(a[i][j+1] == 1  || a[i][j+1] == 3)
        fill(i, j+1,nr);
    if(a[i][j-1] == 1  || a[i][j-1] == 3)
        fill(i, j-1,nr);
}
int main(){
    int n, m, nr=0;
    f >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            f >> a[i][j];
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(a[i][j] == 2)
                fill(i, j, nr);
    g << nr;
    return 0;
}
