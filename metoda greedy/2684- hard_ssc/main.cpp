#include <iostream>

using namespace std;
int n,x,a[100001],cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        int st=1,dr=cnt;
        while(st<=dr){
            int m=(st+dr)/2;
            if(a[m]<x) dr=m-1;
            else st=m+1;
        }
        if(st>cnt) a[++cnt]=x;
        else a[st]=x;
    }
    cout<<cnt;
    return 0;
}
