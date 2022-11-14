#include <iostream>

using namespace std;
void ordonare(int a[] , int n,int st,int dr)
{

    for(int i = st; i < dr ; ++i)
    {
        if(a[i]<a[i-1])
            swap(a[i],a[i-1]);
    }
    if(n > 0)
        ordonare(a,n-1,st,dr);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
