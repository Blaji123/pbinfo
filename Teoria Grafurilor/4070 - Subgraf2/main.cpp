#include <iostream>

using namespace std;
int n,m,k,x,y,nr;
int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        if(x%k!=0&&y%k!=0)
            nr++;
    }
    cout<<nr;
    return 0;
}
