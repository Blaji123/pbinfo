#include <iostream>

using namespace std;
int cautare(int n,double X[],double v){
    int st=0,dr=n-1;
    while(st<=dr){
         int m=(st+dr)/2;
         if(X[m]==v)
             return m;
         else if(X[m]<v)
             st=m+1;
         else
            dr=m-1;
    }
    return -1;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
