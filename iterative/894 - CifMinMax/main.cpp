#include <iostream>

using namespace std;
void cifminmax(int n,int &maxi,int &mini){
    maxi=0;mini=9;
    if(n==0)
       maxi=0,mini=0;
    while(n){
        if(n%10>maxi)
            maxi=n%10;
        if(n%10<mini)
            mini=n%10;
        n/=10;
    }
}
int main()
{
    int n,maxi,mini;
    cin>>n;
    cifminmax(n,maxi,mini);
    cout<<maxi<<" "<<mini;
    return 0;
}
