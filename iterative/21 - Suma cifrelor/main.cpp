#include <iostream>

using namespace std;
void sum_cif(int n,int &s){
   s=0;
   while(n!=0){
    s+=n%10;
    n/=10;
   }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
