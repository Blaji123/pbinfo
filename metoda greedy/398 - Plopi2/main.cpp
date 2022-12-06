#include <fstream>

using namespace std;
ifstream cin("plopi2.in");
ofstream cout("plopi2.out");
int main()
{
    int n,h[101],L=0,nr=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>h[i];
    int mini=h[1];
    for(int i=2;i<=n;i++)
    {
        if(h[i]>mini){
            nr++;
            L+=h[i]-mini;
        }
       else if(h[i]<mini)
         mini=h[i];
    }
    cout<<nr<<" "<<L;
    return 0;
}
