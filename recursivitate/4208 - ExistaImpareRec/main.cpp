#include <iostream>

using namespace std;
int ExistaImpareRec(int n){
    if(n==0)
        return 0;
  if(n%10%2==1)
    return 1;
  else
    return ExistaImpareRec(n/10);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
