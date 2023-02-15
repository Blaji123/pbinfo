#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("sort2.in");
ofstream cout("sort2.out");
int n,fv[100],ok;
int main()
{
    while(cin>>n){
        if((int)log10(n)+1<=2)
              fv[n]++;
    }
    for(int i=0;i<100;i++)
      while(fv[i]){
        cout<<i<<" ";
        fv[i]--;
        ok=1;
    }
    if(ok==0)
        cout<<"NU EXISTA";
    return 0;
}
