#include <iostream>

using namespace std;
int cnt=0;
void afisvec(int v[],int n){
    if(cnt<n)
    {
    cout<<v[cnt]<<" ";
    cnt++;
    afisvec(v,n);
    }
}
int main()
{
    int v[200],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i];
    afisvec(v,n);
    return 0;
}
