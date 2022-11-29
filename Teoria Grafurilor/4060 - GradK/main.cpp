#include <fstream>

using namespace std;
ifstream cin("gradk.in");
ofstream cout("gradk.out");
int a[101][101],x,y,n,k,e[101],nr;
int main()
{
    cin>>n>>k;
    while(cin>>x>>y){
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if(a[i][j])
            e[i]++;
        if(e[i]==k)
            nr++;
    }
    if(nr>0)
    {
    cout<<nr<<" ";
    for(int i=1;i<=n;i++)
            if(e[i]==k)
              cout<<i<<" ";
    }
    else
        cout<<"NU EXISTA";
    return 0;
}
