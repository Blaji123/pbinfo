#include <iostream>

using namespace std;
void afisare(int a,int b){
   if(a>b)
    swap(a,b);
   if(a%2==1)
    a++;
   for(int i=a;i<=b;i+=2)
      cout<<i<<" ";
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
