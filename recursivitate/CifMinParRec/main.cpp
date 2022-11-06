#include <iostream>

using namespace std;
int cifminpar(int x)
{
    if(x<10)
    {
        if(x%2==1) return -1;
        if(x%2==0) return x;
    }
    int p=cifminpar(x/10);
    if(x%2==1) return p;
    else if (p<x%10 and p!=-1) return p;
        else return x%10;
}
int main()
{
    int n;
    cin>>n;
    cout<<cifminpar(n);
    return 0;
}
