#include <iostream>

using namespace std;
int multipli(int a , int b , int c)
{
        while(a%c!=0)
            a++;
        while(b%c!=0)
            b--;
        return (b-a)/c + 1;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<multipli(a,b,c);
    return 0;
}
