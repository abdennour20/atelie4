#include<iostream>
#include<iterator>
#include<set>
using namespace std;

bool recherche( set<int , greater<int>> s , int var){
    auto it = s.find(var);
    if ( it == s.end() ) {
        return false;
    }
    else {
        return true;
    }
}
int main(){
    int var;
    bool l;
    cout<<"Entez une valeur:";
    cin>>var;
    set<int , greater<int>> s ;
    for(int i = 1 ; i<=100 ; i++)
    {
     s.insert(i) ;
    };
    l=recherche(s , var);
    if(l==true)
    {
     cout<<"cette valeur existe."<<endl;
    }
    else
    {
     cout<<"cette valeur n'existe pas.";
    }
}