#include <iostream>

using namespace std;

int main()
{
    int n,a[101][101];
    bool ok=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
           cin>>a[i][j];
    for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++)
    {
         if(a[i][i]!=0)
            ok=0;
        if(a[i][j]!=a[j][i])
            ok=0;
        if(a[i][j]!=1 && a[i][j]!=0)
            ok=0;
    }
    cout<<ok;
    return 0;
}
