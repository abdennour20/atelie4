#include <iostream>
using namespace std ;
class complexe { 
    public :
        int rel,img;
        complexe(){}
        complexe(int re,int im){
        rel=re;
        img=im;}
        complexe operator+(complexe a) 
        {
            complexe somme;
            somme.rel = rel + a.rel;
            somme.img = img + a.img;
            return somme;
        }
        complexe operator-(complexe a)
        {
            complexe soustraction;
            soustraction.rel = rel - a.rel;
            soustraction.img = img - a.img;
            return soustraction;
        }
        complexe operator*(complexe a) 
        {
            complexe produit;
            produit.rel = rel * a.rel - img * a.img;
            produit.img = rel * a.img + img * a.rel;
            return produit;
        }
        complexe operator / (complexe a) 
        {
            complexe division;
            division.img=rel/a.rel;
            division.rel=img/a.img;
            return division;
        }
};
int main(){
    int re1,re2,im1,im2,choix;
    cout << "Entrez la partie reele du 1er complexe: ";
    cin >> re1 ;
    cout << "Entrez la partie imaginaire du 1er complexe: ";
    cin >> im1 ;
    cout << "Le 1er complexe: " << re1<< "+" << im1 <<"i"<< endl;
    cout << "Entrez la partie reele du 2eme complexe: ";
    cin >> re2 ;
    cout << "Entrez la partie imaginaire du 2eme complexe: ";
    cin >> im2 ;
    cout << "L 2eme complexe: " << re2<< "+" << im2 <<"i"<< endl;
    complexe c1(re1,im1);
    complexe c2(re2,im2);
    complexe c3 = c1 + c2;
    complexe c4 = c1 + c2;
    complexe c5 = c1 + c2;
    complexe c6 = c1 + c2;
    cout << " Entrez l'opertaion que vous souhaitez faire :"<<endl;
    string menu[4];
    menu[0] = "1) +" ;
    menu[1] = "2) -";
    menu[2] = "3) * ";
    menu[3] = "4) / ";
    for(int i(0); i<4; ++i)
    { cout << menu[i] << endl;}
    cin >> choix ;
    if (choix == 1 ){
    cout << "Resultat de la somme est: " <<c3.rel<< "+" << c3.img
    <<"i"<< endl;}
    else if (choix == 2){
    cout << "Resulatat de la soustraction est: " <<c4.rel<< "+"
    <<c4.img<<"i"<< endl;}
    else if (choix == 3){
    cout << "Resultat de la multiplication est: " << c5.rel<< "+" <<
    c4.img <<"i"<< endl;}
    else if (choix == 4){
    cout << "Resultat de la division est: " << c6.rel<< "+" <<
    c6.img<<"i"<< endl;}
    return 0;
}