#include <iostream>

using namespace std;
int Suma(int V[], int st, int dr)
{
    if(st == dr)
        if(V[st]%2==0)
        return V[st]; // problemă elementară
        else
            return 0;
    else
    {
        int m = (st + dr) / 2; // împărțim problema în subprobleme
        int s1 = Suma(V, st, m); // rezolvăm prima subproblemă
        int s2 = Suma(V, m + 1, dr); // rezolvăm a doua subproblemă
        return s1 + s2; // combinăm rezultatele
    }
}
int main()
{
    int n,m,a[101][101],S=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)
          cin>>a[i][j];
    for(int i=1;i<=n;i++)
        S=S+Suma(a[i],1,m);
    cout<<S;
    return 0;
}
/*#include <iostream>

using namespace std;

int a[101][101], m, n;
long long sum(int l1,int c1,int l2,int c2)
{
    if (l2<l1 || c2<c1) return 0;
    if (l1==l2 && c1==c2)
        if (a[l1][c1]%2==0)
            return a[l1][c1];
        else
            return 0;
    else
    {
        int lm=(l1+l2)/2;
        int cm=(c1+c2)/2;
        long long s=0;
        s=s+sum(l1,c1,lm,cm);
        s=s+sum(l1,cm+1,lm,c2);
        s=s+sum(lm+1,c1,l2,cm);
        s=s+sum(lm+1,cm+1,l2,c2);
        return s;
    }
}

int main()
{
    cin>>m>>n;
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)
            cin>>a[i][j];
    cout<<sum(1,1,m,n);

    return 0;
}*/
