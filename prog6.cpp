#include <iostream>
using namespace std;

class Test 
{
    public:
        static int tableau[] ;
    public :
        static int division(int indice, int diviseur)
     {
            if((diviseur == 0)&&(indice<0 || indice>9))
            {
             throw "cet indice ne se trouve pas dans le tableau et la division impossible par 0";
            }
            if( diviseur == 0)
            {
             throw "division impossible";
            }
            if(indice<0 || indice>9)
            {
             throw "cet indice ne se trouve pas dans le tableau";
            }
            cout << "Le resultat de la division est: ";
            return tableau[indice]/diviseur;
    }
};
int Test::tableau[] ={17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
    int x, y;
    bool refaire;
    while(!refaire) 
    {
        cout << "Entrez l'indice de l'entier a diviser : " ;
        cin >> x ;
        cout << "Entrez le diviseur: " ;
        cin >> y ;
        try 
        {
         cout <<Test::division(x,y)<< endl;
         refaire=true;
        }
        catch (const char *err)
        {
         cerr << err <<endl;
         refaire=false;
        }
    }
    return 0;
}