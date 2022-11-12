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
    int V[1001], n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>V[i];
    cout << Suma(V,1,n);
    return 0;
}