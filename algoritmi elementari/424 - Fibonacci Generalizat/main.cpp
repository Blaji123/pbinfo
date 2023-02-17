#include <iostream>
#include <cmath>
using namespace std;
int a,b,n;
bool ok=1;
int main()
{
    cin>>a>>b>>n;
    int f1=a,f2=b;
    cout<<f1<<" "<<f2<<" ";
    while(ok){
        int f3=f1+f2;
        if(abs(f3)<=n)
            cout<<f3<<" ";
        else
            ok=0;
        f1=f2;
        f2=f3;
    }
    return 0;
}
