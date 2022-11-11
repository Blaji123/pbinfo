#include <iostream>

using namespace std;
int maxim(int v[],int st,int dr){
  if(st==dr)
    return v[st];
  else
  {

      int m=(st+dr)/2;
      int x=maxim(v,st,m);
      int y=maxim(v,m+1,dr);
      if(x>y)
        return x;
      else
        return y;
  }
}
int main()
{
    int n,v[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cout<<maxim(v,1,n);
    return 0;
}
