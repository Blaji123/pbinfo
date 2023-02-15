#include <iostream>
#include <cmath>
using namespace std;
int n,v[100001],fv[9];
long long S;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
        S+=fv[(int)log10(v[i])+1],fv[(int)log10(v[i])+1]++;
    cout<<S;
    return 0;
}
