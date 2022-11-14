#include <iostream>

using namespace std;
void patrate(int n, int &x, int &y)
{
    int ok = 0;
    for(int i = 2; i*i <= n/2 && !ok; i++)
    {
        for(int j=i+1;j*j<=n/2;j++)
        {
            if (i*i*j*j == n && i != j)
            {
                ok = 1;
                x = i;
                y = j;
            }
        }
    }
    if(ok == 0)
    {
        x = 0;
        y = 0;
    }
}
int main()
{
    int n,x,y;
    cin>>n;
    patrate(n,x,y);
    cout<<x<<" "<<y;
    return 0;
}
