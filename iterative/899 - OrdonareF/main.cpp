#include <iostream>

using namespace std;
void ordonare(int a[],int n){
   for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
       if(a[i]>a[j])
         swap(a[i],a[j]);
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
