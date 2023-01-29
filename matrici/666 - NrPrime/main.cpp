#include <iostream>

using namespace std;
bool is_prim(int n){
   if(n==1 || n==0) return 0;
   if(n!=2 && n%2==0) return 0;
   for(int d=3;d*d<=n;d++)
        if(n%d==0)
           return 0;
   return 1;
}
int main()
{
    int n,m,a[101][101],nr=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
           cin>>a[i][j];
    for(int i=2;i<=n;i+=2)
        for(int j=1;j<=m;j++)
           if(is_prim(a[i][j]))
              nr++;
    cout<<nr;
    return 0;
}
