#include <bits/stdc++.h>
using namespace std;
void rec(int n, int put){
    if(n == 0)
        return ;
    if(n % 2 == 0)
        rec(n / 2, put * 2);
    else
        cout << put << ' ', rec(n / 2, put * 2);
}
int main(){
    int n;
    cin >> n;
    rec(n, 1);
    return 0;
}
