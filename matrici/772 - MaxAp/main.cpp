#include <iostream>
#include <algorithm>
using namespace std;
int n,m,fv[1000001],a[101][101],v[10001],maxim,p;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        cin>>a[i][j];
        fv[a[i][j]]++;
        if(fv[a[i][j]]>maxim)
          maxim=fv[a[i][j]],v[10000]={0},p=0;
        if(fv[a[i][j]]==maxim)
            v[++p]=a[i][j];
    }
    sort(v+1,v+p+1);
    for(int i=1;i<=p;i++)
        cout<<v[i]<<" ";
    return 0;
}
