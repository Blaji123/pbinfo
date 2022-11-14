#include <iostream>

using namespace std;
int v[101];
int CautareBinara(int st,int dr,int x)
{
    if(st>dr)
        return -1;
    else
    {
        int m=(st+dr)/2;
        if(v[m]==x)
            return m;
        if(x<v[m])
           return CautareBinara(st,m-1,x);
        else
            return CautareBinara(m+1,dr,x);

    }
}
int main()
{
    int n;

    return 0;
}
