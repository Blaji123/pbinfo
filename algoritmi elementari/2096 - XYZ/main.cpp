#include <fstream>

using namespace std;
ifstream cin("xyz.in");
ofstream cout("xyz.out");
int x,y,z;
int main()
{
    cin>>x>>y>>z;
    cout<<y;
    for(int i=1;i<x;i++)
        cout<<z;
    return 0;
}
