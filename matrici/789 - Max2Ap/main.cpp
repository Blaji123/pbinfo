#include <iostream>

using namespace std;
int n,m,maxi=-1,a[101][101],fv[1000001];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++){
         cin>>a[i][j];
         fv[a[i][j]]++;
         if(fv[a[i][j]]>=2&&a[i][j]>maxi)
            maxi=a[i][j];
    }
    if(maxi==-1)
        cout<<"IMPOSIBIL";
    else
        cout<<maxi;
    return 0;
}
