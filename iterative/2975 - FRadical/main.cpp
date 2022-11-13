#include <iostream>
#include <cmath>
using namespace std;
void FRadical(int n, int &x, int &y){
    int maxi = 0;
    for(int d = 1; d * d <= n; ++d){
        if(n % d == 0){
            int nr = d;
            int r = sqrt(nr);
            if(r * r == nr && nr > maxi)
                maxi = nr, y = n / d;
            nr = n / d;
            r = sqrt(nr);
            if(r * r == nr && nr > maxi)
                maxi = nr, y = d;
        }
    }
    x = sqrt(maxi);
}
int main()
{
    int n,x,y;
    cin>>n;
    FRadical(n,x,y);
    cout<<x<<" "<<y;
    return 0;
}
