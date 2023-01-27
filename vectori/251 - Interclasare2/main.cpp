#include <fstream>

using namespace std;
ifstream cin("interclasare2.in");
ofstream cout("interclasare2.out");
int n,m,a[100001],b[100001],p,c[200002];
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
           i++;
        else
            j++;
    }
    for(int i=1;i<=p;i++){
        cout<<c[i]<<" ";
        if(i%10==0)
            cout<<endl;
    }
    return 0;
}
