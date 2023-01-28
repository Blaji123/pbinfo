#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("cb3.in");
ofstream cout("cb3.out");
int n,Q,a[10001],x;
long long sp[10001];
int main()
{
    cin>>n>>Q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        sp[i]=sp[i-1]+a[i];
    while(Q){
        cin>>x;
        int st=1,dr=n,ok=1;
        while(st<=dr&&ok){
            int mij=(st+dr)/2;
            if(sp[mij]>x)
                dr=mij-1;
            else if(sp[mij]<x)
                st=mij+1;
            else{
                cout<<mij<<'\n';
                ok=0;
            }
        }
        if(ok==1)
            cout<<dr<<'\n';
        Q--;
    }
    return 0;
}
