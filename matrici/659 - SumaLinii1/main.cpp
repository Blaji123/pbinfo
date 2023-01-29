#include <iostream>

using namespace std;
int n,m,a[101][101],maxim[101];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]>maxim[i])
                maxim[i]=a[i][j];
        }
    for(int i=1;i<=n;i++){
        int S=0;
        for(int j=1;j<=m;j++)
            if(a[i][j]!=maxim[i])
               S=S+a[i][j];
            else
                maxim[i]=-1;
        cout<<S<<" ";
    }
    return 0;
}
