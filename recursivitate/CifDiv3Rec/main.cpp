#include <iostream>

using namespace std;
int cnt=0;
int CifDiv3Rec(int n){
  if(n==0&&cnt==0)
    return 1;
  else if(n==0)
    return 0;
  else
  {
      if(n%10%3==0)
      {
        cnt++;
        return 1+CifDiv3Rec(n/10);

      }
      else
      {
        cnt++;
        return CifDiv3Rec(n/10);
      }
  }
}
int main()
{
    int n;
    cin>>n;
    cout<<CifDiv3Rec(n);
    return 0;
}
