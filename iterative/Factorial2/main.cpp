#include <iostream>

using namespace std;
int det(int n)
{
    int a[11];
    int val1 , val2;
    a[1]=1;
    for(int i = 2 ; i <= 11 ; ++i)
    {
        a[i]=a[i-1]*i;
    }
    for(int i = 1 ; a[i] <= n ; ++i)
    {
        val1=a[i];
        val2=a[i+1];
    }
    if(n-val1 > val2-n)
        return val2;
    else
        return val1;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
