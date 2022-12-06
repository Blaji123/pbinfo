#include <fstream>

using namespace std;
ifstream cin("masini.in");
ofstream cout("masini.out");
int n,m,k,d[1001],nr;
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=k;i++)
        cin>>d[i];
    d[k+1]=n;
    d[0]=0;
    int i=0,cp=m;
    bool ok=1;
    while(i<=k&&ok){
        m-=d[i+1]-d[i];
        if(m<0&&)
    }
    if(ok==1)
      cout<<nr;
    else
      cout<<-1;
    return 0;
}
