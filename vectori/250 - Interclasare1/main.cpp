#include <fstream>

using namespace std;
ifstream cin("interclasare1.in");
ofstream cout("interclasare1.out");
int n,m,p,a[100001],b[100001],c[200002];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>b[i];
    int i=1,j=1;
    while(i<=n&&j<=m){
        if(a[i]==b[j])
            c[++p]=a[i],i++,j++;
        else if(a[i]<b[j])
            c[++p]=a[i],i++;
        else
            c[++p]=b[j],j++;
    }
    while(i<=n)
        c[++p]=a[i],i++;
    while(j<=m)
        c[++p]=b[j],j++;
    for(int i=1;i<=p;i++){
        cout<<c[i]<<" ";
        if(i%10==0)
            cout<<endl;
    }
    return 0;
}
