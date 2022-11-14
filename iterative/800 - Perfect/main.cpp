#include <iostream>

using namespace std;
int sumdiv(int n){
    if(n == 1)
        return 0;
    int sum = 1;
    for(int d = 2; d * d <= n; ++d){
        if(n % d == 0)
            sum += d + (n / d);
        if(d * d == n)
            sum -= d;
    }
    return sum;
}
void perfect(int a, int b){
    bool gasit = false;
    if(a > b)
        swap(a, b);
    for(int i = b; i >= a; --i)
        if(i == sumdiv(i))
            cout << i << ' ', gasit = true;
    if(!gasit)
        cout << "nu exista";
}
int main()
{
    int a,b;
    cin>>a>>b;
    perfect(a,b);
    return 0;
}
