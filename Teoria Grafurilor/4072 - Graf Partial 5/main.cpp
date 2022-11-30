#include <fstream>

using namespace std;
ifstream cin("graf_partial_5.in");
ofstream cout("graf_partial_5.out");
int n,k,a[101][101],x,y,e[101];
int main()
{
    cin>>n>>k;
    while(cin>>x>>y){
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(a[i][j])
              e[i]++;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(e[i]>=k&&e[j]>=k)
        {
            a[i][j]=0;
            a[j][i]=0;
        }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
          cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
