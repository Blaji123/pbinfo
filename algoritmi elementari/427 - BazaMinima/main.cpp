#include <iostream>

using namespace std;
int n,x,i,cifmax;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        while(x){
            if(x%10>cifmax)
                cifmax=x%10;
            x/=10;
        }
    }
    cout<<cifmax+1;
    return 0;
}
