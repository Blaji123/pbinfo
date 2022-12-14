#include <iostream>

using namespace std;
int n,x,L,Lmax=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        bool ok=1;
        while(x>1&&ok){
            if(x%2==0) ok=0;
            x/=2;
        }
        if(ok)
        {
            L++;
            if(L>Lmax)
                Lmax=L;
        }
        else L=0;
    }
    cout<<Lmax;
    return 0;
}
