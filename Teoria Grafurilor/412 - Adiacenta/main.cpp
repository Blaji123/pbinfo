#include <iostream>
#include <fstream>
using namespace std;
ifstream f("adiacenta.in");
ofstream g("adiacenta.out");
int a[101][101],i,j,n,m;
int main()
{
    f>>n>>m;
    for(int k=1;k<=m;k++)
    {
        f>>i>>j;
        a[i][j]=1;
        a[j][i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
          g<<a[i][j]<<" ";
        g<<endl;
    }
    return 0;
}
