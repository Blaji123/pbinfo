#include <iostream>

using namespace std;
bool prim(int n){
   if(n==1 || n==0) return 0;
   if(n!=2 && n%2==0) return 0;
   for(int d=3;d*d<=n;d++)
       if(n%d==0)
         return 0;
   return 1;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
