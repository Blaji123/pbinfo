#include <fstream>
using namespace std;
ifstream cin("listavecini.in");
ofstream cout("listavecini.out");
int n , m , a[101][101] , p , r , e[2500];
int main()
{
    cin >> n;
    while(cin >> p >> r)
    {
        a[p][r] = 1;
        a[r][p] = 1;
        a[0][p]++;
        a[0][r]++;
    }
    for(int i = 1 ; i <= n ; ++i)
        {
            for(int j = 1 ; j <= n ; ++j)
                if (a[i][j]) e[i]++;
        }
    for(int i = 1 ; i <= n ; ++i)
        {
            cout << e[i] << " ";
            for(int j = 1 ; j <= n ; ++j)
              if(a[i][j])cout << j << " ";
            cout << endl;
        }
    return 0;
}
