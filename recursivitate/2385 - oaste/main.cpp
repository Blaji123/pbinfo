#include <bits/stdc++.h>
using namespace std;
ifstream cin("oaste.in");
ofstream cout("oaste.out");
int a[102][102] , b[102][102];
void fill(int i , int j , int &c)
{
    if(a[i][j]!=0)
    {
        c+=a[i][j];
        a[i][j]=0;
        if(a[i+1][j]!=0)
            fill(i+1 , j , c);
        if(a[i-1][j]!=0)
            fill(i-1 , j , c);
        if(a[i][j-1]!=0)
            fill(i , j-1 , c);
        if(a[i][j+1]!=0)
            fill(i , j+1 , c);
    }
}
int ifi=0 , jfi=0;
void fill1(int i , int j , int &max)
{
    if(b[i][j]!=0)
    {
        if(b[i][j]>max)
            max=b[i][j] , ifi=i , jfi=j;
        if(b[i][j]==max)
        {
            if(i < ifi)
                ifi=i , jfi=j;
            if(i == ifi && j < jfi)
                jfi=j;

        }
        b[i][j]=0;
        if(b[i+1][j]!=0)
            fill1(i+1 , j , max);
        if(b[i-1][j]!=0)
            fill1(i-1 , j , max);
        if(b[i][j-1]!=0)
            fill1(i , j-1 , max);
        if(b[i][j+1]!=0)
            fill1(i , j+1 , max);
    }
}
void fill2(int i , int j)
{
    if(b[i][j]!=0)
    {
        b[i][j]=0;
        if(b[i+1][j]!=0)
            fill2(i+1 , j);
        if(b[i-1][j]!=0)
            fill2(i-1 , j);
        if(b[i][j-1]!=0)
            fill2(i , j-1);
        if(b[i][j+1]!=0)
            fill2(i , j+1);
    }
}
int main()
{
    int n , m;
    cin >> n >> m;
    int cnt=0;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            cin >> a[i][j] , b[i][j]=a[i][j];
    int max=0 , lmax=0;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            if(a[i][j]!=0)
            {
                cnt++;
                int c=0;
                fill(i , j , c);
                if(c > max)
                    max = c , lmax=cnt;
            }
    max=0;
    cnt=0;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            if(b[i][j]!=0)
            {
                cnt++;
                if(cnt==lmax)
                {
                    fill1(i , j , max);
                    break;
                }
                else
                    fill2(i , j);
            }
    cout << max << ' ' << ifi << ' ' << jfi;
    return 0;
}
