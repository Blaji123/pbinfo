#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[10];
    int p=0;
    while(n)
    {
        a[p]=n%16;
        n/=16;
        p++;
    }
    for(int i = p-1 ; i >= 0 ; --i)
    {
        if(a[i]<10)
        cout << a[i];
        else
        {
            if(a[i]==10)
            cout << "A";
            if(a[i]==11)
            cout << "B";
            if(a[i]==12)
            cout << "C";
            if(a[i]==13)
            cout << "D";
            if(a[i]==14)
            cout << "E";
            if(a[i]==15)
            cout << "F";
        }
    }
}
