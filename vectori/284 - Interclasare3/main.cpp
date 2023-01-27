#include <fstream>

using namespace std;
ifstream cin("interclasare3.in");
ofstream cout("interclasare3.out");
int n,m,a[100001],b[100001],c[200002],p;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    int i=1,j=m;
    while(i<=n&&j>=1){
        if(a[i]<b[j]){
            if(a[i]%2==0)
              c[++p]=a[i];
          i++;
        }
        else{
            if(b[j]%2==0)
                c[++p]=b[j];
            j--;
        }
    }
    while(i<=n){
        if(a[i]%2==0)
            c[++p]=a[i];
        i++;
    }
    while(j>=1){
        if(b[j]%2==0)
            c[++p]=b[j];
        j--;
    }
    for(int i=1;i<=p;i++){
        cout<<c[i]<<" ";
        if(i%20==0)
            cout<<endl;
    }
    return 0;
}
