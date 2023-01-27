#include <iostream>

using namespace std;
int n,b,x,s=0;
int main()
{
    cin>>b>>n;
    int nr=0,a=1;
    while(nr<n-1){
        a=a*b;
        nr++;
    }
    for(int i=1;i<=n;i++){
        cin>>x;
        s=s+x*a;
        a=a/b;
    }
    cout<<s;
    return 0;
}
