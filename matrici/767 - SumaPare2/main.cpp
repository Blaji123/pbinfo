#include <iostream>

using namespace std;
int n,m,S,a[101][101];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++){
        cin>>a[i][j];
        if(!(a[i][j]%2))
            S+=a[i][j];
    }
    cout<<S;
    return 0;
}
