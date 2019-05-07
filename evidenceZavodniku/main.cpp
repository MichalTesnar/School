#include <iostream>
#include <fstream>

using namespace std;
//******************************************************
struct ZAVODNIK
{
    char prijmeni[30], jmeno[30];   //příjmení a jméno závodníka
    char stat[4];                   //zkratka státu, za který závodník startuje
    int cas;                        //čas, za který závodník dokončil závod v sekundách
    bool existence;                 //true dokud neni smazan
};
//******************************************************
void printMenu()
{
    string menu[8] =
    {
        "Pridani noveho zavodnika",
        "Vypis vsech zavodniku",
        "Editace zavodnika",
        "Zadani casu pro libovolneho zavodnika",
        "Vymaz zavodnika",
        "Setrideni zavodniku dle dosazenych casu",
        "Vytvoreni prazdneho souboru zavodniku",
        "Konec programu"
    };
    for(int i=1; i<=8; i++)
    {
        cout<<i<<"."<<menu[i-1]<<endl;
    }
}
//******************************************************
void deleteZavodnik()
{
    cout<<"Poradove cislo zavodnika?"<<endl;
    int i;
    cin>>i;
    fstream soubor;
    ZAVODNIK zav;

    soubor.open("zavodnici.dat",ios::binary|ios::in|ios::out);
    soubor.seekg((i-1)*sizeof(ZAVODNIK), ios::beg);
    soubor.read((char*)&zav, sizeof(ZAVODNIK));

    if(zav.existence)
    {
        cout<<"Je to tento? ANO/NE"<<endl;
        cout<<zav.jmeno<<" "<<zav.prijmeni<<" "<<zav.stat<<" "<<zav.cas<<"s"<<endl;
    }
    string option;
    cin>>option;
    if(option=="NE")
    {
        return;
    }
    zav.existence=false;

    soubor.seekg((i-1)*sizeof(ZAVODNIK), ios::beg);
    soubor.write((char*)&zav, sizeof(ZAVODNIK));

    soubor.close();
}
//******************************************************
void editZavodnik()
{
    cout<<"Poradove cislo zavodnika?"<<endl;
    int i;
    cin>>i;
    fstream soubor;
    ZAVODNIK zav;

    soubor.open("zavodnici.dat",ios::binary|ios::in|ios::out);
    soubor.seekg((i-1)*sizeof(ZAVODNIK), ios::beg);
    soubor.read((char*)&zav, sizeof(ZAVODNIK));

    if(zav.existence)
    {
        cout<<"Je to tento? ANO/NE"<<endl;
        cout<<zav.jmeno<<" "<<zav.prijmeni<<" "<<zav.stat<<" "<<zav.cas<<"s"<<endl;
    }
    string option;
    cin>>option;
    if(option=="NE")
    {
        return;
    }
    cout<<"Jmeno: ";
    cin>>zav.jmeno;
    cout<<"Prijmeni: ";
    cin>>zav.prijmeni;
    cout<<"Stat: ";
    cin>>zav.stat;

    soubor.seekg((i-1)*sizeof(ZAVODNIK), ios::beg);
    soubor.write((char*)&zav, sizeof(ZAVODNIK));

    soubor.close();
}
//******************************************************
void editCas()
{
    cout<<"Poradove cislo zavodnika?"<<endl;
    int i;
    cin>>i;
    fstream soubor;
    ZAVODNIK zav;

    soubor.open("zavodnici.dat",ios::binary|ios::in|ios::out);
    soubor.seekg((i-1)*sizeof(ZAVODNIK), ios::beg);
    soubor.read((char*)&zav, sizeof(ZAVODNIK));

    if(zav.existence)
    {
        cout<<"Je to tento? ANO/NE"<<endl;
        cout<<zav.jmeno<<" "<<zav.prijmeni<<" "<<zav.stat<<" "<<zav.cas<<"s"<<endl;
    }
    string option;
    cin>>option;
    if(option=="NE")
    {
        return;
    }
    cout<<"Cas: ";
    cin>>zav.cas;

    soubor.seekg((i-1)*sizeof(ZAVODNIK), ios::beg);
    soubor.write((char*)&zav, sizeof(ZAVODNIK));

    soubor.close();
}
//******************************************************
void createFile()
{
    string vyber;
    cout<<"Toto prepise stary soubor! ANO/NE?"<<endl;
    cin>>vyber;
    if(vyber=="NE")
    {
        return;
    };
    ofstream soubor;
    soubor.open("zavodnici.dat");
    soubor.close();
}
//******************************************************
void createZavodnik()
{
    ZAVODNIK zav;
    cout<<"Jmeno: ";
    cin>>zav.jmeno;
    cout<<"Prijmeni: ";
    cin>>zav.prijmeni;
    cout<<"Stat: ";
    cin>>zav.stat;
    zav.cas=-1;
    zav.existence=true;

    fstream soubor;
    soubor.open("zavodnici.dat",ios::binary|ios::in|ios::app);
    soubor.write((char*)&zav, sizeof(ZAVODNIK));
    soubor.close();
}
//******************************************************
void printZavodnici()
{
    int i=1;
    ifstream soubor;
    ZAVODNIK zav;
    soubor.open("zavodnici.dat",ios::binary|ios::in|ios::out);
    while(soubor.read((char*)&zav, sizeof(ZAVODNIK)))
    {
        if(zav.existence)
        {
            cout<<i<<" "<<zav.jmeno<<" "<<zav.prijmeni<<" "<<zav.stat<<" "<<zav.cas<<"s"<<endl;
        }
        i++;
    }
    soubor.close();
}
//******************************************************
void notProvided()
{
    cout<<"Tato funkce neni naprogramovana."<<endl;
}
//******************************************************
void rozhodnuti(int option)
{
    switch(option)
    {
    case 1:
        createZavodnik();
        break;
    case 2:
        printZavodnici();
        break;
    case 3:
        editZavodnik();
        break;
    case 4:
        editCas();
        break;
    case 5:
        deleteZavodnik();
        break;
    case 6:
        notProvided();
        break;
    case 7:
        createFile();
        break;
    case 8:
        break;
    default:
        cout<<"Toto neni volba"<<endl;
    }
}
//******************************************************
int main()
{
    int option = 0;
    do
    {
        printMenu();
        cout<<"Volba?"<<endl;
        cin>>option;
        rozhodnuti(option);
    }
    while(option!=8);

    return 0;
}
