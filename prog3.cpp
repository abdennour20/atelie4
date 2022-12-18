#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showlist(list <int> n)
{
    list <int> :: iterator it;
    for ( it = n.begin(); it != n.end(); ++it)
        cout<< '\t' << *it;
        cout << '\n';
}
int main (){
    list <int> l;
    l.push_back(5); 
    l.push_back(18);
    l.push_back(89);
    l.push_back(45);
    l.push_back(90);
    l.sort(); 
    cout <<"votre liste est :"<<endl;
    showlist(l);
    return 0;
}