#include <iostream>

using namespace std;
int n,v[101],c;
int main()
{
    cin>>n;
    int p=1;
    while(n){
        v[++c]=n%2;
        n/=2;
    }
    for(int i=1;i<=c;i++){
        if(v[i]==1)
            cout<<p<<" ";
        p*=2;
    }
    return 0;
}
