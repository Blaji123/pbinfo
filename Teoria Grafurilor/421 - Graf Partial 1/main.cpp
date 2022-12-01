#include <fstream>
using namespace std;
ifstream cin("graf_partial_1.in");
ofstream cout("graf_partial_1.out");
int n,a[101][101],e[101],maxi,mini,nr,x,y;
int main()
{
    cin>>n;
    mini=n+1;maxi=-1;
    while(cin>>x>>y){
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if(a[i][j])
              e[i]++;
        if(e[i]>maxi)
            maxi=e[i];
        if(e[i]<mini)
            mini=e[i];
    }
    for(int i=1;i<=n;i++)
        if(e[i]==mini)
        for(int j=1;j<=n;j++)
          if(e[j]==maxi && a[i][j]==1)
     {
        a[i][j]=0;
        a[j][i]=0;
        nr++;
     }
    cout<<nr<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
