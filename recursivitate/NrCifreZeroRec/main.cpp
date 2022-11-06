#include <iostream>

using namespace std;
int cnt = 0;
int nr_cif_zero(int n){
    if(n == 0 && cnt == 0)
        return 1;
    else if(n == 0)
        return 0;
    else{
        cnt++;
        if(n % 10 == 0)
            return nr_cif_zero(n / 10) + 1;
        else
            return nr_cif_zero(n / 10);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<nr_cif_zero(n);
    return 0;
}
