#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void vycetka(int castka);
void cteniCisel(string jmenoSouboru);
void cteniTeplot(string jmenoSouboru2);

int main()
{
    int castka;
    string jmenoSouboru = "cisla.txt";
    string jmenoSouboru2 = "teploty.txt";
    //cin>>castka;
    //vycetka(castka);
    //cteniCisel(jmenoSouboru);
    cteniTeplot(jmenoSouboru2);
    return 0;
}

void cteniCisel(string jmenoSouboru)
{
    int cislo;
    int pocet=0, soucet=0;
    int maximum=-1000000, minimum=1000000;

    ifstream soubor(jmenoSouboru.c_str());

    if (soubor.is_open())
    {
        do
        {
            soubor>>cislo;
            soucet=soucet+cislo;
            pocet++;
            if (cislo>maximum)
            {
                maximum=cislo;
            }
            if (cislo<minimum)
            {
                minimum=cislo;
            }
            if (soubor.good())
            {
                ;
            }
            else
            {
                if(!soubor.eof())
                {
                    soubor.clear();
                    soubor.ignore();
                    pocet--;
                }
            }
        }
        while(!soubor.eof());
    }
    soubor.close();

    cout<<"Number of values: "<<pocet<<endl;
    cout<<"Average: "<<(float)soucet/pocet<<endl;
    cout<<"Minimum: "<<minimum<<endl;
    cout<<"Maximum: "<<maximum<<endl;
}

void vycetka(int castka)
{
    ofstream soubor;
    string stars = "************************";

    int platidlo[12]= {5000,2000,1000,500,200,100,50,20,10,5,2,1};

    soubor.open("vycetka.txt");

    soubor<<"Celková částka:"<<castka<<" Kč"<<endl;
    soubor<<stars<<endl;
    soubor<<" * Výèetka platidel *"<<endl;
    soubor<<stars<<endl;

    for(int i=0; i<12; i++)
    {
        soubor <<setw(4)<<platidlo[i]<<" Kč "<<castka/platidlo[i]<<endl;
        castka=castka%platidlo[i];
    }
    soubor.close();
}

void cteniTeplot(string jmenoSouboru2){
    string datum;
    float t1,t2,t3,t4;
    ifstream soubor(jmenoSouboru2.c_str());
    if (soubor.is_open())
    {
        do{
            soubor>>datum;
            cout<<datum<<endl;

            if (soubor.good()){;}
            else {
                if(!soubor.eof())
                {
                    soubor.clear();
                    soubor.ignore();
                }
            }
        }
        while(!soubor.eof());
    }
    soubor.close();
}
