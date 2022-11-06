#include <iostream>

using namespace std;
int p=1,nr=0,cnt=0;
int IncDecRec(int n){
    if(n==0&&cnt==0)
    return 1;
    if(n==0&&cnt!=0)
      return nr;
  if(n%10%2==0)
  {
      nr=nr+(n%10+1)*p;
      p=p*10;
      cnt++;
      IncDecRec(n/10);
  }
  else
  {
      nr=nr+(n%10-1)*p;
      p=p*10;
      cnt++;
      IncDecRec(n/10);
  }
}
int main()
{
    int n;
    cin>>n;
    cout<<IncDecRec(n);
    return 0;
}
