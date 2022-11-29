#include <fstream>

using namespace std;
ifstream cin("gradmax.in");
ofstream cout("gradmax.out");
int a[101][101],y,n,cmax=-1,x,nr;
int main()
{
    cin>>n;
    while(cin>>x>>y){
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++){
            int cnt=0;
        for(int j=1;j<=n;j++)
            if(a[i][j])
             cnt++;
        if(cnt>cmax)
          cmax=cnt,nr=1;
        else if(cnt==cmax)
            nr++;
    }
    cout<<nr<<" ";
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=n;j++)
            if(a[i][j])
                cnt++;
        if(cnt==cmax) cout<<i<<" ";
    }
    return 0;
}
