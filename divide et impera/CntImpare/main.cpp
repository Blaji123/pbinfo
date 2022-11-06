#include <iostream>

using namespace std;
int nr_impare(int v[],int st,int dr){
  if(st==dr)
    if(v[st]%2==1)
      return 1;
    else
        return 0;
  else
  {
      int m=(st+dr)/2;
      return nr_impare(v,st,m)+nr_impare(v,m+1,dr);
  }
}
int main()
{
    int n,v[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cout<<nr_impare(v,1,n);
    return 0;
}
