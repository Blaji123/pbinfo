#include <iostream>

using namespace std;
int a,b,a1,b1;
int main()
{
    cin>>a>>b;
    int aa=a,bb=b;
    while(a || b){
        if(a%2==1)
            a1++;
        if(b%2==1)
            b1++;
        a/=2,b/=2;
    }
    if(a1>b1)
        cout<<aa;
    else
        cout<<bb;
    return 0;
}
