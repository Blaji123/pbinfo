#include <iostream>

using namespace std;
int interschimbare(int v[],int st,int dr){
  int x,aux,i,j;
  x=v[dr];
  i=st-1;
  for(j=st;j<=dr-1;j++)
  {
      if(v[j]<x)
      {
          i++;
          aux=v[i];
          v[i]=v[j];
          v[j]=aux;
      }
  }
  aux=v[i+1];
  v[i+1]=v[dr];
  v[dr]=aux;
  return (i+1);
}
void quicksort(int v[],int st,int dr){
  if(st<dr)
  {
      int m=interschimbare(v,st,dr);
      quicksort(v,st,m-1);
      quicksort(v,m+1,dr);
  }
}
int main()
{
    int n,v[100001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    quicksort(v,1,n);
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
/*#include <iostream>
using namespace std;

int n , v[100005];

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

int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
        cin >> v[i];
    QuickSort(0 , n - 1);
    for(int i = 0 ; i < n ; i ++)
        cout << v[i] << " ";
    return 0;
}*/
