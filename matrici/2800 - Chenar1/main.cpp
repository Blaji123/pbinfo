#include <iostream>

using namespace std;
int n,m,a[51][51];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
           cin>>a[i][j];
    int x=a[n][m];
    for(int i=1;i<=n;i++){
        a[i][1]=x;
        a[i][m]=x;
    }
    for(int j=1;j<=m;j++){
        a[1][j]=x;
        a[n][j]=x;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
