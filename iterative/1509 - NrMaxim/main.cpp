#include <iostream>

using namespace std;
int nrmaxim(int n)
{
    int nrc = 0, p = 1, k = n, maxx = n;
    while(k)
    {
        nrc ++;
        p = p * 10;
        k = k / 10;
    }
    p = p / 10;
    while(nrc)
    {
        if(n > maxx) maxx = n;
        n = n % p * 10 + n / p;
        nrc --;
    }
    return maxx;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
