#include <iostream>

using namespace std;
int n,m,a[101][101],nr1;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int nr=0;
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]==a[i][j-1]) nr++;
        }
        if(nr==m-1)
            nr1++;
    }
    cout<<nr1;
    return 0;
}
