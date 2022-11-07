#include <iostream>
#include <cmath>
using namespace std;
int multiplu(int n){
   for(int i=n;i>0;i=i+n)
     if((int)sqrt(i)==sqrt(i))
       return i;
}
int main()
{
    int n;
    cin>>n;
    cout<<multiplu(n);
    return 0;
}
