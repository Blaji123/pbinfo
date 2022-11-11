#include <iostream>

using namespace std;
int v[1001];
void QuickSort(int st, int dr)
{
    if(st < dr)
    {
        //determinam pivorul
        int m = (st + dr) / 2;
        int aux = v[st];
        v[st] = v[m];
        v[m] = aux;
        int i = st , j = dr, d = 0;
        while(i < j)
        {
            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        QuickSort(st , i - 1);
        QuickSort(i + 1 , dr);
    }
}
int main()
{
    int n,a[1001],i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        a[i]=v[i];
    }
    QuickSort(1,n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
          if(v[i]==a[j])
             cout<<j<<" ";
    return 0;
}
