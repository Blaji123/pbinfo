#include <iostream>

using namespace std;
int m,n,a[51][51],nr;
int main()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
           cin>>a[i][j];
    for(int j=1;j<=n;j++){
        int ok=1;
        for(int i=2;i<=m&&ok;i++)
            if(a[i][j]!=a[1][j])
                ok=0;
        if(ok==1)
            cout<<a[1][j]<<" ",nr++;
    }
    if(nr==0)
        cout<<"nu exista";
    return 0;
}
