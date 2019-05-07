#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//*********************************
int zasobnik[50];
int vrchol = -1;
void pridejDoZasobniku(int cislo)
{
    vrchol++;
    zasobnik[vrchol]=cislo;
}

    int vratZeZasobniku()
    {
        vrchol--;
        return zasobnik[vrchol+1];
    }

    void vypisZeZasobnik()
    {
        for(int i=0; i<=vrchol; i++)
        {
            cout<<zasobnik[i]<<" ";
    }
    cout<<endl;
}
//*********************************
int fronta[50];
int zacatek=0;
int konec=0;

void pridejDoFronty(int cislo)
{
    fronta[konec]=cislo;
    konec = (konec+1)%50;
}

int vratZFronty()
{
    int vraceni = fronta[zacatek];
    zacatek = (zacatek+1)%50;
    return vraceni;
}

void vypisZFronty()
{
    int i = zacatek;
    while (i!=konec)
    {
        cout<<fronta[i]<<" ";
        i = (i+1)%50;
    }
    cout<<endl;
}
//*********************************
int main()
{
    int uzly[]= {0,3,5,9,13,16,18};
    int hrany[]= {1,2,3,
                  0,2,
                  0,1,3,4,
                  0,2,4,5,
                  2,3,5,
                  3,4
                 };
    srand(time(NULL));
    int pozice=rand()%6;

    int uzJsemTamByl[]={0,0,0,0,0,0};
    int uzJsemSiHoPoznacil[]={0,0,0,0,0,0};
    uzJsemTamByl[pozice]=1;
    uzJsemSiHoPoznacil[pozice]=1;
    cout<<pozice<<endl;

    int pocet=(uzly[pozice+1]-uzly[pozice]);
    cout<<"Moznosti:";
    for(int i=0;i<pocet;i++){
        pridejDoZasobniku(hrany[uzly[pozice]+i]);
        uzJsemSiHoPoznacil[hrany[uzly[pozice]+i]]=1;
        }
    vypisZeZasobnik();

    while(vrchol!=-1){
        int kdeJsem = vratZeZasobniku();
        cout<<kdeJsem<<endl;
        uzJsemTamByl[kdeJsem]=1;
        pocet=(uzly[kdeJsem+1]-uzly[kdeJsem]);
        cout<<"Moznosti:";
        for(int i=0;i<pocet;i++){
            if(!uzJsemTamByl[hrany[uzly[kdeJsem]+i]] and !uzJsemSiHoPoznacil[hrany[uzly[kdeJsem]+i]]){
                pridejDoZasobniku(hrany[uzly[kdeJsem]+i]);
                uzJsemSiHoPoznacil[hrany[uzly[pozice]+i]]=1;
            }
            }
        vypisZeZasobnik();
       }

    ///test zasobniku
        /*vypisZeZasobnik();
        for(int i=0; i<12; i++)
        {
            pridejDoZasobniku(rand()%5 + 1);
        }
        vypisZeZasobnik();
        for(int i=0; i<12; i++)
        {
            vratZeZasobniku();
        }
        vypisZeZasobnik();*/

    ///test fronty
        /*vypisZFronty();
        for(int i=0; i<12; i++)
        {
            pridejDoFronty(rand()%5 + 1);
        }
        vypisZFronty();
        for(int i=0; i<12; i++)
        {
            vratZFronty();
        }
        vypisZFronty();*/

    return 0;

}
