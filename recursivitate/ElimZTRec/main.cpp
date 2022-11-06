#include <iostream>

using namespace std;
int ElimZTRec(int n){
   if(n%10==0)
     return ElimZTRec(n/10);
   else
    return n;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
