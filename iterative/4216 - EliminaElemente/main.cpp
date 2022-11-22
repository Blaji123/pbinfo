#include <bits/stdc++.h>

using namespace std;
void EliminaElemente(int a[], int n, int m){
   int fv[2000],sum=0,nr=0;
   for(int i=0;i<n;i++)
       fv[a[i]]++;

}
int main()
{
    int v[200],n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>v[i];
    EliminaElemente(v,n,m);
    return 0;
}
