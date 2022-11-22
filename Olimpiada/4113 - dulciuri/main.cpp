#include <bits/stdc++.h>
using namespace std;
const int nmax=1e6;
long long r[nmax+5],c[nmax+5];
ifstream f("dulciuri.in");
ofstream g("dulciuri.out");
struct dulciuri{
  inline int sd(int x){
     return x & (-x);
  }
  vector<long long> v;
  int len=0;
  dulciuri(int n){
     v.resize(n+1,0);
     len=n;
  }
  void updMatrice(int poz,long long val){
      for(int i=poz;i<=len;i+=sd(i))
        v[i]+=val;
  }
  long long mod(int poz){
     long long tmp=0;
     for(int i=poz;i>=1;i-=sd(i))
        tmp+=v[i];
     return tmp;
  }
};
int main()
{
    dulciuri rand(nmax+1),coloana(nmax+1);
    int Q,z,xU,val,yU,x,y,x1,y1;
    f>>Q;
    while(Q){
        f>>z;
        if(z==1)
        {
            f>>xU>>val;
            coloana.updMatrice(xU+1,val);
            c[xU]+=val;
        }
        if(z==2)
        {
            f>>yU>>val;
            rand.updMatrice(yU+1,val);
            r[yU]+=val;
        }
        if(z==3)
        {
            f>>x>>y>>x1>>y1;
            if(x>x1)
                swap(x,x1);
            if(y>y1)
                swap(y,y1);
            long double r1,c1;
            if(y1==y)
                r1=r[y];
            else
                r1=1.00 * (rand.mod(y1)-rand.mod(y))/(y1-y);
            if(x==x1)
                c1=c[x];
            else
                c1=1.00 * (coloana.mod(x1)-coloana.mod(x))/(x1-x);
            g<<fixed<<setprecision(10)<<r1+c1<<endl;
        }
      Q--;
    }
    return 0;
}
