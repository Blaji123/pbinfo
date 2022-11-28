#include <fstream>
using namespace std;
ifstream cin("izolate.in");
ofstream cout("izolate.out");
int n , m , a[101][101] , p , r , e[2500],nr;
int main()
{
    cin >> n;
    while(cin >> p >> r)
    {
        a[p][r] = 1;
        a[r][p] = 1;
    }
    for(int i = 1 ; i <= n ; ++i)
        {
            for(int j = 1 ; j <= n ; ++j)
                if (a[i][j]) e[i]++;
            if(e[i]==0)
                nr++;
        }
    cout<<nr<<" ";
    for(int i = 1 ; i <= n ; ++i)
          if(e[i]==0)
        {
            cout << i << " ";
        }
    return 0;
}
