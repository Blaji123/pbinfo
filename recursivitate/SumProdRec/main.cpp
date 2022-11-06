#include <iostream>

using namespace std;
long long SumProdRec(int n){
   if(n==1 || n==0)
    return 0;
   return n*(n-1)+SumProdRec(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<SumProdRec(n);
    return 0;
}
