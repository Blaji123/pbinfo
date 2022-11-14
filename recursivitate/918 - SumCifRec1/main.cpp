#include <iostream>

using namespace std;
void sumcif(int n, int& s){
    if(n == 0)
        s = 0;
    else
        sumcif(n / 10, s), s += n % 10;
}
int n,s;
int main()
{
    cin>>n;
    sumcif(n,s);
    cout<<s;
}
