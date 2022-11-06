#include <bits/stdc++.h>
using namespace std;
ifstream f("oaste2.in");
ofstream g("oaste2.out");
int n, m, a[101][101], c, sum, cmin = 1000000, smax = 0;
bool inmat(int i, int j){
    return i >= 1 && j >= 1 && i <= n && j <= m;
}
int di[]={0,0,-1,1}, dj[]={-1,1,0,0};
void fill(int i, int j){
    c++;
    sum += a[i][j];
    a[i][j] = 0;
    for(int d = 0; d < 4; ++d){
        int inou = i + di[d];
        int jnou = j + dj[d];
        if(inmat(inou, jnou) && a[inou][jnou])
            fill(inou, jnou);
    }
}
int main(){
    f >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            f >> a[i][j];
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(a[i][j]){
                c = 0, sum = 0;
                fill(i,j);
                if(sum > smax)
                    smax = sum, cmin = c;
                else if(sum == smax && c < cmin)
                    cmin = c;
            }
    g << smax << ' ' << cmin;
    return 0;
}
