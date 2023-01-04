#include <fstream>

using namespace std;
ifstream cin("clase.in");
ofstream cout("clase.out");
long long n,m,v[10001],a[10001],nr;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++){
        int st=1,dr=n,ok=1;
        while(st<=dr&&ok==1){
            int m=(st+dr)/2;
            if(v[m]==a[i])
                ok=0;
            else
                if(v[m]<a[i])
                   st=m+1;
            else
                   dr=m-1;
        }
        if(ok==0)
            nr++;
    }
    cout<<nr;
    return 0;
}
