#include <iostream>

using namespace std;
int cnt=0;
int DifParImpar(int n){
    if(n==0&&cnt==0)
          return 1;
    else if(n==0)
       return 0;
  if(n%10%2==0)
  {
      cnt++;
      return 1+DifParImpar(n/10);
  }
  if(n%10%2==1)
  {
      cnt++;
      return -1+DifParImpar(n/10);
  }
  return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<DifParImpar(n);
    return 0;
}
