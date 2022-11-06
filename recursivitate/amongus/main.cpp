#include <iostream>
#include <fstream>
using namespace std;
ifstream f("amongus.in");
ofstream g("amongus.out");
int a[101][101],n,m;
void fill(int i, int j){
    a[i][j] = 3;
    if((a[i+1][j] == 0 || a[i+1][j]==2) && i+1<=n)
        fill(i+1, j);
    if((a[i-1][j] == 0 || a[i-1][j]==2) && i-1>0)
        fill(i-1, j);
    if((a[i][j+1] == 0 || a[i][j+1]==2) && j+1<=m)
        fill(i, j+1);
    if((a[i][j-1] == 0 || a[i][j-1]==2) && j-1>0)
        fill(i, j-1);
}
bool p3(int i,int j){
  if(i==1 && j==1)
    return true;
  if(a[i-1][j]!=1 && i-1>0)
    return p3(i-1,j);
  else if(a[i][j-1]!=1 && j-1>0)
    return p3(i,j-1);
  else if(a[i+1][j]!=1 && i+1<=n)
    return p3(i+1,j);
  else if(a[i][j+1]!=1 && j+1<=m)
    return p3(i,j+1);
  else
    return false;
}
int main()
{
    int p,ok=0;
    f>>p;
    f>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
          f>>a[i][j];
    if(a[1][1]==1)
        {
        cout<<"misiune esuata";
        p=0;
        }
    if(p==1)
    {
        int nr=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
              if(a[i][j]==0)
                 nr++;
        g<<nr;
    }
    if(p==2)
    {
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if((a[i][j]==0 || a[i][j]==2)&&ok==0)
                {
                    fill(i,j);
                    ok=1;
                }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                g<<a[i][j]<<" ";
            g<<endl;
        }
    }
    if(p==3)
    {
        int nr=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(a[i][j]==2&&p3(i,j)==true)
                   nr++;
        g<<nr;
    }
    return 0;
}
