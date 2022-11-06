#include <iostream>

using namespace std;
int nr_pare(int v[],int st,int dr){
  if(st==dr)
    if(v[st]%2==0)
      return 1;
    else
        return 0;
  else
  {
      int m=(st+dr)/2;
      return nr_pare(v,st,m)+nr_pare(v,m+1,dr);
  }
}
int main()
{
    int n,v[101];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    if(nr_pare(v,1,n)==n)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
