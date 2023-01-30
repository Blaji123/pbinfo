#include <iostream>

using namespace std;
int n,m,a[101][101],fv[10001],maxim,maxi;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++){
         cin>>a[i][j];
         fv[a[i][j]]++;
         if(fv[a[i][j]]>maxim)
            maxim=fv[a[i][j]], maxi=0;
         if(fv[a[i][j]]==maxim&&a[i][j]>maxi)
            maxi=a[i][j];
    }
    cout<<maxi;
    return 0;
}
