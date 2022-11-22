#include <iostream>

using namespace std;
int interval(int a[],int n){
    int c=a[0],b=a[n-1],nr=2;
    if(c>b)
        swap(c,b);
    for(int i=1;i<n-1;i++)
        if(a[i]>=c && a[i]<=b)
          nr++;
   return nr;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
