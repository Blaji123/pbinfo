#include <iostream>

using namespace std;

int n, dim;
const int NMAX = (1 << 9);
int a[NMAX + 1][NMAX + 1];

void generare(int i, int j, int x){

    if(x){

        a[i][j] = x;

        int mid_line_1 = (i >> 1);
        int mid_line_2 = ((dim + i + 1) / 2);

        int mid_col_1 = (j >> 1);
        int mid_col_2 = ((dim + j + 1) / 2);

        generare(mid_line_1, mid_col_1, x - 1);
        generare(mid_line_1, mid_col_2, x - 1);
        generare(mid_line_2, mid_col_1, x - 1);
        generare(mid_line_2, mid_col_2, x - 1);

    }
}

void print(){

    for(int i = 1; i <= (1 << n) - 1; i++){

        for(int j = 1; j <= (1 << n) - 1; j++)
            cout << a[i][j] << " ";

        cout << "\n";
    }

}

int main(){

    cin >> n;
    dim = (1 << n) - 1;
    generare((1 << (n - 1)), (1 << (n - 1)), n);
    print();

}
