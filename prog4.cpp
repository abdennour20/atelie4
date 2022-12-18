#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist(list <string> personne)
{
    list <string> :: iterator it;
    for ( it = personne.begin(); it != personne.end(); ++it)
    cout<< '\t' << *it;
    cout << '\n';
}
int main()
{
    list <string> P;
    P.push_back("hafsa akzoun 20 ans");
    P.push_back("rim akzoun 22 ans");
    P.push_back("Rachida Mesiah 45 ans");
    P.sort();
    cout <<"votre liste est :"<<endl;
    showlist(P);
    return 0;
}