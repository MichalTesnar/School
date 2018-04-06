#include <iostream>
#include <ctime>
#include <cstdlib>
#define pocet 20
using namespace std;

int main()
{
    int i=0;        //cyklus
    int ar[pocet];  //pole
    int d;          //pomocne promenne
    srand(time(NULL));
    for (i=0; i<pocet; i++)
    {
        ar[i]=rand()%10;
    }
    for (i=0;i<pocet;i++)
        {
        cout<<ar[i]<<" ";
        }
    cout<<endl;
    for (i=0;i<pocet/2;i++){
        d=ar[i];
        ar[i]=ar[pocet-1-i];
        ar[pocet-1-i]=d;
    }
    for (i=0;i<pocet;i++)
        {
        cout<<ar[i]<<" ";
        }
    return 0;
}
