#include <iostream>
#include <algorithm>
using namespace std;
int n,m,a[101][101],v[10001],fv[1000001],p;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
           cin>>a[i][j];
    for(int i=1;i<=n;i++){
        if(fv[a[i][1]]==0)
            v[++p]=a[i][1],fv[a[i][1]]++;
        if(fv[a[i][m]]==0)
            v[++p]=a[i][m],fv[a[i][m]]++;
    }
    for(int j=1;j<=m;j++){
        if(fv[a[1][j]]==0)
            v[++p]=a[1][j],fv[a[1][j]]++;
        if(fv[a[n][j]]==0)
            v[++p]=a[n][j],fv[a[n][j]]++;
    }
    sort(v+1,v+p+1);
    for(int i=1;i<=p;i++)
        cout<<v[i]<<" ";
    return 0;
}
