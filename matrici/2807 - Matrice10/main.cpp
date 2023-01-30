#include <iostream>

using namespace std;
#define maxi 10001
int n,m,a[51][51],minif=maxi,iminif,minil=maxi,iminil;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
           cin>>a[i][j];
    for(int i=1;i<=n;i++)
    {
        if(a[i][1]<minif)
            minif=a[i][1],iminif=i;
        if(a[i][m]<minil)
            minil=a[i][m],iminil=i;
    }
    int aux=a[iminif][1];
    a[iminif][1]=a[iminil][m];
    a[iminil][m]=aux;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
