#include <iostream>

using namespace std;
int cifmaxpar(int n){
   if(n<10)
   {
       if(n%2==1) return -1;
       else return n;
   }
   int x=cifmaxpar(n/10);
  if(n%2==1)
    return x;
  else
  {
      if(x>n%10&&x!=-1) return x;
      else return n%10;
  }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
