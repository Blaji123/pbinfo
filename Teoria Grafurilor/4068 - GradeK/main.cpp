#include <fstream>
using namespace std;
ifstream cin("gradek.in");
ofstream cout("gradek.out");
int n , m , a[101][101] , p , r , e[2500],k,nr=0;
int main()
{
    cin >> n>>k;
    while(cin >> p >> r)
    {
        a[p][r] = 1;
        a[r][p] = 1;
    }
    for(int i = 1 ; i <= n ; ++i)
        {
            for(int j = 1 ; j <= n ; ++j)
                if (a[i][j]) e[i]++;
        }
    for(int i = 1 ; i <= n ; ++i)
        if(e[i]==e[k])
          nr++;
    cout<<nr<<endl;
    for(int i = 1 ; i <= n ; ++i)
          if(e[i]==e[k])
        {
            cout << i << " ";
        }
    return 0;
}
