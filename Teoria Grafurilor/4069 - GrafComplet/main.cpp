#include <iostream>

using namespace std;
int n,k,a[101][101];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
          if(i!=j && i%k!=j%k)
    {
        a[i][j]=1;
        a[j][i]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
