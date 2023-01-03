#include <iostream>

using namespace std;
struct nod{
    int info;
    nod * urm;
};
int numarare(nod * p){
   nod *t=new nod;
   t->info=p;

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
