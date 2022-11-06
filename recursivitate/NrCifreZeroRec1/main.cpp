#include <iostream>

using namespace std;
int cnt = 0;
void nr_cif_zero(int n,int &nr){
    if(n == 0 && cnt == 0)
        nr=1;
    else if(n == 0)
        nr=0;
    else{
        cnt++;
        if(n % 10 == 0)
            nr_cif_zero(n / 10,nr),nr++;
        else
            nr_cif_zero(n / 10,nr);
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
