#include <iostream>

using namespace std;
int suma(int v[],int n,int m){
    int suma=0;
   for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
       if(v[i]>v[j])
         swap(v[i],v[j]);
   for(int i=0;i<m;i++)
      suma+=v[i];
   return suma;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
