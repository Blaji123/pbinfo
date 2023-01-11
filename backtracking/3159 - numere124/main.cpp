#include <bits/stdc++.h>
using namespace std;
int n,c,x[10],v[11],uz[10],nr;
void Afis()
{
    for(int i=1; i<=c; i++)
        cout<<v[x[i]];
    cout<<'\n';
}
void back(int k)
{
    for(int i=1; i<=nr; i++)
        if(uz[i]==0)
        {
            x[k]=i;
            uz[i]=1;
            if(k==1&&v[i]==0);
            else{
            if(k==c)
                Afis();
            else
                back(k+1);
            }
            uz[i]=0;
        }
}
int main()
{
    cin>>n>>c;
    while(n)
    {
        v[++nr]=n%10;
        n/=10;
    }
    sort(v+1,v+nr+1);
    back(1);
    return 0;
}
