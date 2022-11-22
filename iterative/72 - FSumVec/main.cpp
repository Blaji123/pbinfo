#include <iostream>

using namespace std;
int suma(int v[],int n,int i,int j){
    int sum=0;
   for(int k=1;k<i;k++)
      sum+=v[k];
   for(int k=j+1;k<=n;k++)
      sum+=v[k];
   return sum;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
