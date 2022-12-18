#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;
    void date(const string& DATE){
    if ( DATE.length() != 12 )
    cout << "Entrez 12 caracteres" << endl;
    else
    {
    cout << "Date : " << DATE.substr(0,2) << "/" << DATE.substr(2,2) <<"/" << DATE.substr(4,4) << endl;
    cout << "Heure : " << DATE.substr(8,2) << "h" << DATE.substr(10,2) <<"min" <<endl;
}
}
    int main(){
    string D ;
    cout << "Entrez la date sous forme de JJMMAAAAHHNN : ";
    cin >> D;
    date(D);
    return 0;
}