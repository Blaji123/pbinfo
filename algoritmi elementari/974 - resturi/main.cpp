#include <iostream>

using namespace std;
unsigned long long n,k;
int main()
{
    cin>>n>>k;
    cout<<(n/k)*(k*(k-1)/2)+(n%k)*(n%k+1)/2;
    return 0;
}
