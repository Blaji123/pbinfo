#include <iostream>

using namespace std;
int DivImpar(int a , int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    if(a % 2 == 1)
        return a;
    else
    {
        int maxi = 0;
        for(int d = 1 ; d * d <= a ; ++d)
        {
            if(a % d == 0)
            {
                if(d >= maxi && d % 2 == 1)
                    maxi = d;
                if(a/d >= maxi && (a / d) % 2 == 1)
                    maxi = a/d;
            }
        }
        return maxi;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<DivImpar(a,b);
    return 0;
}
