#include <iostream>

using namespace std;
int n,m,a[101][101];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int S=0;
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            S+=a[i][j];
        }
        cout<<S<<" ";
    }
    return 0;
}
