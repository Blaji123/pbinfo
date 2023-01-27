#include <fstream>

using namespace std;
ifstream cin("conversie_b_10.in");
ofstream cout("conversie_b_10.out");
int n,b,put=1,s=0;
int main()
{
    cin>>n>>b;
    while(n){
        s=s+(n%10)*put;
        put*=b;
        n/=10;
    }
    cout<<s;
    return 0;
}
