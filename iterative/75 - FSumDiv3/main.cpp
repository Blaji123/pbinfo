#include <iostream>

using namespace std;
int sum3(int v[],int n){
    int suma=0;
   for(int i=0;i<n;i++)
    if(v[i]%3==0)
       suma+=v[i];
   return suma;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
