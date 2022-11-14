#include <iostream>

using namespace std;
int numarare(int v[], int n)
{
    if (n <= 1)
        return 0;
    else
        if (v[n-1] == v[n-2])
            return numarare(v, n-1)+1;
        else
            return numarare(v, n-1);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
