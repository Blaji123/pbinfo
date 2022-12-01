#include <iostream>

using namespace std;
int n,a,b,cnta,cntb;
int main()
{
    cin>>n>>a>>b;
    while(n%a && n>0)
        n-=b,cntb++;
    while(n)
        n-=a,cnta++;
    for(int i=1;i<=cnta;i++)
        cout<<a<<" ";
    for(int i=1;i<=cntb;i++)
        cout<<b<<" ";
    return 0;
}
