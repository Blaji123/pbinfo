#include <iostream>

using namespace std;
int MatDiag(int a[100][100], int n){
   for(int i=0;i<n-1;i++)
    for(int j=0;j<n-1;j++)
      if(a[i][j]!=a[i+1][j+1])
         return 0;
    return 1;
}
int main()
{
    int a[100][100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          cin>>a[i][j];
    cout<<MatDiag(a,n);
    return 0;
}
