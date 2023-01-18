#include <iostream>

using namespace std;
bool v[1000001];
int n;
int main()
{
    cin>>n;
    v[0]=v[1]=1;
    for(int i=2;i*i<=n;i++)
        if(v[i]==0)
           for(int j=2;i*j<=n;j++)
              v[i*j]=1;
    for(int i=1;i<=n;i++)
        if(v[i]==0)
           cout<<i<<" ";
    return 0;
}
