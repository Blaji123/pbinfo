#include <iostream>

using namespace std;
int n,m,a[101][101],x;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
          cin>>a[i][j];
    cin>>x;
    int ok=0;
    for(int i=1;i<=n&&ok==0;i++)
        if(a[i][1]==x || a[i][m]==x)
            ok=1;
    for(int i=1;i<=m&&ok==0;i++)
        if(a[1][i]==x || a[n][i]==x)
            ok=1;
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
