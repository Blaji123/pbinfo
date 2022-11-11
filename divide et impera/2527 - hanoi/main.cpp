#include <bits/stdc++.h>
using namespace std;
ifstream cin1("hanoi.in");
ofstream cout2("hanoi.out");
void hanoi(int n , char a , char b , char c)
{
    if(n > 0)
    {
        hanoi(n - 1 , a , c , b);
        cout2 << a << "->" << c << '\n';
        hanoi(n - 1 , b , a , c);
    }
}
int main()
{
    int n;
    cin1 >> n;
    char a = 'A' , b = 'B' , c = 'C';
    int put = 1;
    for(int i = 0 ; i < n ; ++i)
        put *= 2;
    cout2 << put-1 << endl;
    hanoi(n , a , b , c);
    return 0;
}
