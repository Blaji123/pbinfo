#include <iostream>

using namespace std;
int n,a[21][21];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[1][i];
    for(int i=2;i<=n;i++){
      a[i][1]=a[i-1][n];
      for(int j=2;j<=n;j++)
          a[i][j]=a[i-1][j-1];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
