#include <iostream>
#include <fstream>

#define PARAMETR 4

using namespace std;

//Hashovaci funkce
int hashFunkce(string radek)
{
    int soucet = 0;
    int delka=radek.length();
    for(int i=0; i<delka; i++)
    {
        soucet = soucet+radek[i]+PARAMETR;
    }
    return soucet%41;
}
//***************************************************
//Kolizni funkce
int kolizeFunkce(int index)
{
    index=index+1;
    if(index>=41)
    {
        index=index-41;
    }
    return index;
}
//***************************************************
//Main
int main()
{
    int pocetKolize=0;
    string pole[41];

    fstream soubor;
    string radek;
    soubor.open("seznam2A.txt");

    while(getline(soubor, radek))
    {
        cout<<radek<<endl;
        int index=hashFunkce(radek);
        while(pole[index]!="")
        {
            pocetKolize=pocetKolize+1;
            index=kolizeFunkce(index);
        }
        pole[index]=radek;
    }
    soubor.close();

    for(int i=0; i<41; i++)
    {
        cout<<i<<pole[i]<<endl;
    }
    cout<<pocetKolize<<endl;

    string hledaneJmeno;
    cout<<"Koho hledame?"<<endl;
//***************************************************
//hledame jmeno
    while(getline(cin, hledaneJmeno)){
        if(hledaneJmeno=="ne"){
            return 0;
        }
        int index = hashFunkce(hledaneJmeno);
        cout<<index<<endl;
        if(pole[index]==hledaneJmeno){
            cout<<"ANO"<<endl;
        }
        else{
            cout<<"Neni to tam, kde to ma byt."<<endl;
            cout<<"Zkusime jinde"<<endl;
            while(pole[index]!=hledaneJmeno){
                index=kolizeFunkce(index);
            }
            cout<<hledaneJmeno<<": "<<index<<endl;
            cout<<"Koho hledame?/Nechci hledat, napis 'ne'"<<endl;
        }
    }
    return 0;
}
