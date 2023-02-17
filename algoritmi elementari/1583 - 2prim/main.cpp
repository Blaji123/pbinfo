#include <fstream>

using namespace std;
ifstream cin("2prim.in");
ofstream cout("2prim.out");
bool is_prim(int n){
    if(n==1 || n==0) return 0;
    if(n!=2&&n%2==0) return 0;
    for(int d=3;d*d<=n;d++)
        if(n%d==0)
           return 0;
    return 1;
}
int main()
{
    int n,nr=0,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        int c=x/100;
        if(is_prim(c))
            nr++;
    }
    cout<<nr;
    return 0;
}
