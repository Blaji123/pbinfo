#include <bits/stdc++.h>
using namespace std;
const int nmax=1000001;
#define ll long long
int main()
{
    ll max1=-nmax,max2=-nmax,min1=nmax,min2=nmax;
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x>max1){
            max2=max1;
            max1=x;
        }
       else if(x>max2) max2=x;
       if(x<min1){
        min2=min1;
        min1=x;
       }
       else if(x<min2) min2=x;
    }
    if(max1*max2>min1*min2) cout<<max1*max2;
    else cout<<min1*min2;
    return 0;
}
