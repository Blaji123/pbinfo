#include <iostream>

using namespace std;
int n,a,b,cnta,cntb;
int main()
{
    cin>>n>>a>>b;
    while(n%b && n>0)
        n-=a,cnta++;
    while(n)
        n-=b,cntb++;
    for(int i=1;i<=cnta;i++)
        cout<<a<<" ";
    for(int i=1;i<=cntb;i++)
        cout<<b<<" ";
    return 0;
}
