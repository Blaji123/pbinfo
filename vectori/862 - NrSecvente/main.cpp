#include <iostream>

using namespace std;
int n,v[100001],t,k,nr,nrmax;
int main()
{
    cin>>n>>t>>k;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    v[n+1]=t+1;
    for(int i=1;i<=n+1;i++){
        if(v[i]<=t) nr++;
        else
        {
            if(nr==k)
               nrmax++;
            else if(nr>k)
                nrmax+=nr-k+1;
            nr=0;
        }
    }
    cout<<nrmax;
    return 0;
}
