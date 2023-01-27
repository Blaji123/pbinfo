#include <iostream>

using namespace std;
int n,v[1001],S,S1,nr,ok;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++){
        if(v[i]%2==1&&ok==0)
             ok=1;
        if(ok==1)
            S+=v[i];
        if(nr==1)
            S1+=v[i];
        if(v[i]%2==1&&ok==1)
            S1=0,nr=1;
    }
    cout<<S-S1;
    return 0;
}
