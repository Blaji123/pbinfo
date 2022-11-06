#include <iostream>

using namespace std;
int v[200001];
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
void QuickSort1(int st, int dr)
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
            if(v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        QuickSort1(st , i - 1);
        QuickSort1(i + 1 , dr);
    }
}
int main()
{
    int n,k,i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>v[i];
    QuickSort(1,k);
    QuickSort1(k+1,n);
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
