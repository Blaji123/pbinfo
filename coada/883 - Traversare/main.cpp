#include <bits/stdc++.h>
using namespace std;
ifstream in("traversare.in");
ofstream out("traversare.out");
const int di[]={-1 , 0 , 1 , 0};
const int dj[]={0 , 1 , 0 , -1};
int n , m ;
int a[1002][1002];
int ip , jp , is , js;
struct poz{int i , j;};
poz q[1000000];
bool inside(int i , int j){return i>=1 && i<=n && j>=1 && j<=m;}
int lee(int dr)
{
    int st;
    st=1;
    while(st<=dr)
    {
        int i = q[st].i;
        int j = q[st].j;
        if (i == n)break;
        for(int d = 0 ; d < 4 ; d++)
        {
            int inou=i+di[d];
            int jnou=j+dj[d];
            if(inside(inou,jnou) && a[inou][jnou]==0)
            {
                q[++dr].i=inou;
                q[dr].j=jnou;
                a[inou][jnou]=a[i][j]+1;
            }
        }
        st++;
    }
    return a[q[st].i][q[st].j];
}
int main()
{
    in >> n >> m;
    for(int i = 1 ; i <=n ; ++i)
        for(int j = 1 ; j <=m ; ++j)
           in >> a[i][j];
    int dr = 0;
    for (int j = 1; j <= m; j ++)
    {
        if (a[1][j] == 0)
        {
            poz start;
            start.i = 1;
            start.j = j;
            a[1][j] = 1;
            q[++dr] = start;
        }
    }
    out << lee(dr);
    return 0;
}
