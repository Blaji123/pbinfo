#include <iostream>

using namespace std;
int kpn(int a,int b,int k){
    int nr=0;
  for(int i=a;i<=b;i++)
  {
      int s=1;
     for(int d=2;d*d<=i;d++)
      if(i%d==0)
      {
         s+=d;
         if(d*d < i)
            s+=i/d;
      }
      s+=i;
      if(s%2==i%2)
        nr++;
      if(nr==k)
        return i;
  }
  return -1;
}
int main()
{
    int a,b,k;
    cin>>a>>b>>k;
    cout<<kpn(a,b,k);
    return 0;
}
