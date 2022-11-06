#include <iostream>

using namespace std;
int elimcif(int n,int c){
  if(n==0)
    return 0;
  else
  {
      if(n%10==c)
        return elimcif(n/10,c);
      else
          return n %10 + elimcif(n/10,c)*10;
  }
}
int main()
{
    int n,c;
    cin>>n>>c;
    cout<<elimcif(n,c);
    return 0;
}
