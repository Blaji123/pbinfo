#include <iostream>

using namespace std;
int n,m,x[1001],y[1001],ok;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>y[i];
    for(int i=1;i<=n;i++)
       if(x[i]==y[1]){
         int j=i,p=2,nr=1;
         while(j+1<=n&&x[j+1]==y[p])
            nr++,j++,p++;
         if(nr==m){
            ok=1,cout<<i;
            break;
         }
    }
    if(ok==0)
        cout<<"NU";
    return 0;
}
