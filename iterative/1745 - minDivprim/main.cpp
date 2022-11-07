#include <iostream>

using namespace std;
int minDivPrim(int n)
{
    int x=1,d=2;
    while(n>1)
    {
        if(n%d==0)
            {
                while(n%d==0)n/=d;
                x=x*d;
            }
                ++ d;
        if(n>1 && d*d>n)d = n;
    }
    return x;
}
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
