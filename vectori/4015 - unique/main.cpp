#include <iostream>
#include <bitset>

using namespace std;

const int NMAX = 2e5;
bitset <NMAX + 1> fr1, fr2;

int main(){

    int x = 0, k = 0;

    while(cin >> x){

        if(!fr1[x])
            fr1[x] = 1;
        else fr2[x] = 1;

    }

    for(int i = 0; i <= NMAX; i++)
        if(fr1[i] && !fr2[i])
        	k++;

	cout << k;

}
