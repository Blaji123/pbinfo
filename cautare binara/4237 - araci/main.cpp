#include <iostream>
#include <algorithm>
using namespace std;
int n,A,d[100001],nr;
int main()
{
    cin>>n>>A;
    for(int i=1;i<=n;i++)
        cin>>d[i];
    sort(d+1,d+n+1);
    int st=1,dr=n;
    while(st<=dr){
        int m=(st+dr)/2;
        if(d[m]>=A){
            nr+=d[m]/A;
            dr=m-1;
        }
        else
            st=m+1;
    }
    cout<<nr;
    return 0;
}
