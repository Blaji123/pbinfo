#include <fstream>

using namespace std;
ifstream cin("graf_partial.in");
ofstream cout("graf_partial.out");
int n,x,y,a[101][101],cnt;
int main()
{
    cin>>n;
    while(cin>>x>>y){
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++)
          if(i%2==j%2)
    {
        a[i][j]=0;
        a[j][i]=0;
    }
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
           if(a[i][j])
             cnt++;
    cout<<cnt;
    return 0;
}
