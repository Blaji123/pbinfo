#include <iostream>

using namespace std;
int n,x,a[1001],cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        int ok=0;
        for(int i=1;i<=cnt&&ok==0;i++)
        if(x>a[i]){
            a[i]=x;
            ok=1;
        }
        if(ok==0)a[++cnt]=x;
    }
    cout<<cnt;
    return 0;
}
