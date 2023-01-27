#include <iostream>

using namespace std;
int n,nr0,nr1;
int main()
{
    cin>>n;
    while(n){
        if(n%2==0)
            nr0++;
        else
            nr1++;
        n/=2;
    }
    cout<<nr0<<" "<<nr1;
    return 0;
}
