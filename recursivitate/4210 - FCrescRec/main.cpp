#include <iostream>

using namespace std;
int FCrescRec(int n){
    if(n/10==0)
        return 1;
   if(n%10>n/10%10)
      return 0;
   FCrescRec(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<FCrescRec(n);
    return 0;
}
