#include <fstream>

using namespace std;
ifstream cin("eratostene.in");
ofstream cout("eratostene.out");
int n,v[1000001],x,nr,m=1000001;
int main()
{
    cin>>n;
    v[0]=v[1]=1;
    for(int i=2;i*i<=m;i++)
        if(v[i]==0)
          for(int j=2;i*j<=m;j++)
            v[i*j]=1;
    while(cin>>x)
        if(v[x]==0)
          nr++;
    cout<<nr;
    return 0;
}
