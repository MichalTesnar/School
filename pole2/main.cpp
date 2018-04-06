#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

#define pocet 500000
using namespace std;

int main()
{
    int ar[pocet];  //array
    int i=0;        //cykly
    int a=0;        //posledni cislo arraye
    int b=0;        //pocet stejnych
    int d=0;        //pomocna promena
    int l=0;        //lol
    srand(time(NULL));
    for(i=0; i<pocet; i++)
    {
        ar[i]=rand()%10;
    }
    for (i=0; i<pocet; i++)
    {
        cout<<i<<"."<<ar[i]<<" ";
    }
    a=ar[pocet-1];
    for (i=0; i<pocet; i++)
    {
        if(a==ar[i])
        {
            b++;
        }
    }
    cout<<b<<endl;
    for (i=0; i<pocet-1; i++)
    {
        d=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=d;
        d=0;

    }
    for (i=0; i<pocet; i++)
    {
        cout<<i<<"."<<ar[i]<<" ";
    }
    for (i=0; i<pocet-1; i++)
    {
        l=rand();
        cout<<l<<endl;

    }
    return 0;
}
