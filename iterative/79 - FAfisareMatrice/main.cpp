#include <iostream>

using namespace std;
void afismat(int a[][100], int n, int m){
    for(int i = 0; i < n; ++i, cout << endl)
        for(int j = 0; j < m; ++j)
            cout << a[i][j] << ' ';
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
