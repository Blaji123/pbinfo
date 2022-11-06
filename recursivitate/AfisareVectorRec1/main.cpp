#include <iostream>

using namespace std;
void afisvec(int v[],int n){
 if(n!=0)
 {
     cout<<v[n-1]<<" ";
     n--;
     afisvec(v,n);
 }
}
int main()
{
    int n,v[200];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    afisvec(v,n);
    return 0;
}
