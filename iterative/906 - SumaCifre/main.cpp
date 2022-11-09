#include <iostream>

using namespace std;
int sumcif(int n,int &sumP,int &sumImp){
   sumP=0;sumImp=0;
   while(n!=0){
    if(n%10%2==0)
        sumP+=n%10;
    else
        sumImp+=n%10;
    n/=10;
   }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
