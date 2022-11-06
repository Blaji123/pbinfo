#include <iostream>

using namespace std;
int cmmdc(int a,int b){
  if(a==b)
    return a;
  else
    if(a<b)
      return cmmdc(a,b-a);
  else
      return cmmdc(a-b,b);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
