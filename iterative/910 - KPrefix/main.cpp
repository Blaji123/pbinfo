#include <iostream>
#include <cmath>
using namespace std;
void prefix(int n,int k,int &nDub){
    nDub=n/pow(10,(int)log10(n)-k+1);
}
int main()
{
    int n,k,nDub;
    cin>>n>>k;
    prefix(n,k,nDub);
    cout<<nDub;
    return 0;
}
