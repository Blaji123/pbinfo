#include <iostream>

using namespace std;
bool a_prim(int n){
    int nr=0,d=2;
 while(n>1){
    int p=1;
    while(n%d==0)
    {
        p*=10;
        if(p>10)
           return 0;
        n/=d;
    }
    if(p==10)
        nr++;
    d++;
 }
    if(nr==2)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<a_prim(n);
    return 0;
}
