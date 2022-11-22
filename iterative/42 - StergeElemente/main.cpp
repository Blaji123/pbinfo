#include <iostream>

using namespace std;
void sterge(int v[],int &n,int i,int j){
    int b[101],p=0;
    for(int k=1;k<=n;k++)
        b[k]=v[k];
    for(int k=1;k<i;k++)
    {
       p++;
       v[p]=b[k];
    }
    for(int k=j+1;k<=n;k++)
    {
        p++;
        v[p]=b[k];
    }
    n=p;
}
int main()
{
    int v[101],n,i,j;
    cin>>n;
    for(int k=0;k<n;k++)
        cin>>v[k];
    cin>>i>>j;
    sterge(v,n,i,j);
    for(int k=0;k<n;k++)
      cout<<v[k]<<" ";
    return 0;
}
