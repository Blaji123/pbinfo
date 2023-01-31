#include <iostream>

using namespace std;
int n,m,nr,a[101][101];
int main()
{
    cin>>n>>m;
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<=m+1;j++){
        if(i==0 || j==0 || i==n+1 || j==n+1)
           a[i][j]=2;
           cin>>a[i][j];
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
          if(a[i-1][j]%2==0 && a[i+1][j]%2==0 && a[i][j-1]%2==0 && a[i][j+1]%2==0)
               nr++;
    cout<<nr;
    return 0;
}
