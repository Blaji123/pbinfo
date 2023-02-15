#include <iostream>

using namespace std;
int n,x,ok=1;
int main()
{
    cin>>n;
    for(int i=1;i<=n&&ok;i++){
        cin>>x;
        if(x%2==1)
            cout<<"DA",ok=0;
    }
    if(ok==1)
        cout<<"NU";
    return 0;
}
