#include <iostream>

using namespace std;
int n,m,a[101][101];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
           cin>>a[i][j];
    for(int i=1;i<=n;i++){
        int aux=a[i][1];
        for(int j=2;j<=m;j++)
            a[i][j-1]=a[i][j];
        a[i][m]=aux;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
