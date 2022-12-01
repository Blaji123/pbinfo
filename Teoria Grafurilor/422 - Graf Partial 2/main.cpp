#include <fstream>

using namespace std;
ifstream cin("graf_partial_2.in");
ofstream cout("graf_partial_2.out");
int n,x,y,a[101][101],maxi=-1,e[101],nr;
int main()
{
    cin>>n;
    while(cin>>x>>y){
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            if(a[i][j])
              e[i]++;
        if(e[i]>maxi)
            maxi=e[i];
    }
    for(int i=1;i<=n;i++)
        if(e[i]==maxi)
          for(int j=1;j<=n;j++)
            if(a[i][j])
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
