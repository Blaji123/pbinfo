#include <fstream>

using namespace std;
ifstream cin("subgraf.in");
ofstream cout("subgraf.out");
bool is_prim(int n){
  if(n==1 || n==0) return 0;
  if(n!=2 && n%2==0) return 0;
  for(int d=3;d*d<=n;d++)
      if(n%d==0)
        return 0;
  return 1;
}
int n,x,y,nr,a[101][101];
int main()
{
    cin>>n;
    while(cin>>x>>y){
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
     if(is_prim(i))
        for(int j=1;j<=n;j++)
    {
        a[i][j]=0;
        a[j][i]=0;
    }
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
          if(a[i][j])
            nr++;
    cout<<nr;
    return 0;
}
