#include <iostream>
#include <cstring>
using namespace std;
int f[2000001];
long long SecvBiti(char s[])
{
    int l = strlen(s);
    f[l]=1;
    long long int cnt = 0;
    for(int i = 0 ; i < l ; ++i)
        if(s[i]=='1') cnt++ , f[l+cnt]++;
        else cnt-- , f[l+cnt]++;
    cnt=0;
    for(int i = 0 ; i < 2*l ; ++i)
        cnt = cnt + f[i] * (f[i]-1LL) / 2;
    return cnt;
}
int main()
{
    char s[256];
    cin>>s;
    cout<<SecvBiti(s);
    return 0;
}
