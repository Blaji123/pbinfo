#include <iostream>

using namespace std;
int x[25000],y[200000],n,m;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i];
    cin>>m;
    for(int i=1;i<=m;i++)
        cin>>y[i];
    for(int i=1;i<=m;i++)
    {
        int ok=1,st=1,dr=n;
        while(st<=dr&&ok==1)
        {
            int m=(st+dr)/2;
            if(x[m]==y[i])
                ok=0;
            else
                if(x[m]<y[i])
                   st=m+1;
            else
                dr=m-1;
        }
        if(ok==0)
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }
    return 0;
}
