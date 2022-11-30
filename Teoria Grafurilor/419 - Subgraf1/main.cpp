#include <fstream>

using namespace std;
ifstream cin("subgraf1.in");
ofstream cout("subgraf1.out");
int n,x,y,a[101][101],e[101],minim,cnt;
int main()
{
    cin>>n;
    minim=n+1;
    while(cin>>x>>y){
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
    {
         for(int j=1;j<=n;j++)
            if(a[i][j])
              e[i]++;
        if(e[i]<minim)
            minim=e[i];
    }
    for(int i=1;i<=n;i++)
        if(e[i]>minim)
    {
        for(int j=i+1;j<=n;j++)
            if(a[i][j]&&e[j]>minim)
              cnt++;
    }
    cout<<cnt;
    return 0;
}
