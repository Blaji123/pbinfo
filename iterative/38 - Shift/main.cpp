#include <iostream>

using namespace std;
int shift(int x[],int n){
  int aux=x[0];
  for(int i=1;i<n;i++)
    x[i-1]=x[i];
  x[n-1]=aux;
}
int main()
{
    int x[200],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    shift(x,n);
    for(int i=0;i<n;i++)
        cout<<x[i];
    return 0;
}
