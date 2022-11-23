#include <iostream>

using namespace std;
void Succesor(int a[], int n, int k)
{
    int f[30001]={0};
    for(int i = 1 ; i <= k ; ++i)
        f[a[i]] = 1;
    bool ok = true;
    int indice=0;
    for(int i = k ; i >= 1 && ok ; --i)
    {
        for(int j = a[i] ; j <= n && ok ; ++j)
        {
            if(f[j]!=1)
            {
                a[i]=j;
                indice = i;
                ok=false;
            }
        }
    }
    for(int i = indice + 1 ; i <= k ; ++i)
        f[a[i]]=0;
    for(int i = indice + 1 ; i <= k ; ++i)
    {
        bool ok = true;
        for(int j = a[i-1] + 1 ; j <= n && ok ; ++j)
        {
            if(f[j]==0)
            {
                a[i]=j;
                ok=false;
            }
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
