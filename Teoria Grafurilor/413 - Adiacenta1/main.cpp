#include <iostream>
#include <fstream>
using namespace std;
ifstream f("adiacenta1.in");
ofstream g("adiacenta1.out");
int a[101][101],x,y,maxi;
int main()
{
    while(!f.eof())
    {
        f>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
        if(y>maxi)
            maxi=y;
    }
    for(int i=1;i<=maxi;i++)
    {
        for(int j=1;j<=maxi;j++)
            g<<a[i][j]<<" ";
        g<<endl;
    }
    return 0;
}
