#include <iostream>
#include <cstdlib>
using namespace std;

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

int main()
{
    char vstup[200];
    do
    {
        cout<<"Type a number or an operator: ";
        cin>>vstup;
        int cislo = (atoi(vstup));
        int x, y;
        if(cislo==0 and vstup[0]!='0')
        {
            char znamenko = vstup[0];
            switch(znamenko)
            {
            case '+':
                x=vratZeZasobniku();
                y=vratZeZasobniku();
                pridejDoZasobniku(x+y);
                break;
            case '-':
                x=vratZeZasobniku();
                y=vratZeZasobniku();
                pridejDoZasobniku(x-y);
                break;
            case '*':
                x=vratZeZasobniku();
                y=vratZeZasobniku();
                pridejDoZasobniku(x*y);
                break;
            case '/':
                x=vratZeZasobniku();
                y=vratZeZasobniku();
                pridejDoZasobniku(x/y);
                break;
            }
        }
        else
        {
            pridejDoZasobniku(cislo);
        }
    }
    while(vstup[0]!='=');
    cout<<"Result: "<<vratZeZasobniku()<<endl;

    return 0;
}
