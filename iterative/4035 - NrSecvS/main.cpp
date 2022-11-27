#include <iostream>

using namespace std;
long long NrSecvS(int a[], int n, int S)
{
    long long nr_secv = 0;
    int s[1000001] = {0};
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
        s[i] = sum;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int sum_secv = s[j] - s[i - 1];
            if (sum_secv > S)
            {
                nr_secv += (n - j + 1);
                break;
            }
        }
    }
    return nr_secv;
}
int main()
{
    int a[200],n,S;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>S;
    cout<<NrSecvS(a,n,S);
    return 0;
}
