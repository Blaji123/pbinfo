#include <fstream>
using namespace std;
ifstream cin("grade.in");
ofstream cout("grade.out");
int n , m , a[101][101] , p , r , e[2500];
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
        }
    for(int i = 1 ; i <= n ; ++i)
        {
            cout << e[i] << " ";
        }
    return 0;
}
