#include<iostream>
#include<cstring>
using namespace std;

long long Power(int b,int e)
{
    long long p=1;
    while(e)
        p=p*b,e--;
    return p;
}

void Baza10(char b16[21],long long &n)
{
    if(strlen(b16))
    {
        int c;
        if(b16[0]>='0' && b16[0]<='9')
            c=int(b16[0]-'0');
        else
            c=int(b16[0]-'A'+10);
        n=n+Power(16,strlen(b16)-1)*c;
        Baza10(b16+1,n);
    }
}

int main()
{
    char b16[21];
    long long n=0;
    cin>>b16;
    Baza10(b16,n);
    cout<<n;
}
