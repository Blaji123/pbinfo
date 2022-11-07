#include <iostream>

using namespace std;
int poz(int x1, int y1, int l1, int i1, int x2, int y2, int l2, int i2)
{
   int r;
   if (x1==x2 && y1==y2 && l1==l2 && i1==i2) r=1;
   else
   {
      if (x1+l1<x2 || y1+i1<y2 || x2+l2<x1 || y2+i2<y1 ) r=2;
      else
      {
         if ((x1<x2 && y1<y2 && x1+l1>x2+l2 && y1+i1>y2+i2) || (x2<x1 && y2<y1 && x2+l2>x1+l1 && y2+i2>y1+i1)) r=0;
         else
          r=3;
      }
   }
   return r;
}
int main()
{
    cout<<poz(50, 50, 100, 50, 200, 100, 100, 130);
    return 0;
}
