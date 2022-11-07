#include <iostream>

using namespace std;
long long nroot(int n, long long x)
{
    return round(pow(max(x , -x) , 1.0/n));
}
int main()
{
    int n;
    long long x;
    cin>>x>>n;
    cout<<nroot(n,x);
    return 0;
}
