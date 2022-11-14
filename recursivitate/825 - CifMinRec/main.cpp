#include <iostream>

using namespace std;
int cifmin(int n)
{
    if(n < 10)
        return n;
    else
    {
        int x = cifmin(n / 10);
        if(x < n % 10)
            return x;
        else
            return n % 10;
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
