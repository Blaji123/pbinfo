#include <iostream>
#include <cstring>
using namespace std;
int nr_vocale(char s[])
{
    if(s[0] == NULL)  return 0;
    int lu = strlen(s);
    char ch = s[lu - 1];
    s[lu - 1] = NULL;
    if(strchr("aeiouAEIOU", ch))
        return 1 + nr_vocale(s);
    return nr_vocale(s);
}
int main()
{
    char s[101];
    cin.getline(s,101);
    cout<<nr_vocale(s);
    return 0;
}
