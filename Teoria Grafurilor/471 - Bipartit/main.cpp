#include <fstream>

using namespace std;
ifstream cin("bipartit.in");
ofstream cout("bipartit.out");
int n,m,a[101][101],e[101],k,ok=1,x,y;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        if(a[x][y]==0){
            a[x][0]++;
            a[y][0]++;
        }
        a[x][y]=1;
        a[y][x]=1;
    }
    cin>>k;
    for(int i=1;i<=k;i++)
        cin>>e[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
          for(int p=1;p<=k;p++)
             if(e[p]==i || e[p]==j)
                a[i][j]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
           if(a[i][j])
             ok=0;
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
