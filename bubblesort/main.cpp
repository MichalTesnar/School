#include <iostream>
#include <ctime>
#include <cstdlib>
#define pocet 300000
using namespace std;

int main()
{
    int i=0;
    int j=0;        //cykly
    int ar[pocet];  //pole
    int d,e;        //pomocne promenne
    int kamzajet=0,poslprohoz=0;
    bool pro=true;
    int t1,t2;
    t1 = time(NULL);
    srand(time(NULL));
    for (i=0; i<pocet; i++)
    {
        ar[i]=rand()%100;
    }
    for (i=0;i<pocet;i++)
        {
        cout<<ar[i]<<" ";
        }
    cout<<endl;
    poslprohoz=pocet-1;
    do
    {
        kamzajet=poslprohoz;
        pro = false;
        for (i=0; i<kamzajet; i++)
        {
            d=ar[i];
            e=ar[i+1];
            if (d>e)
            {
                ar[i+1]=d;
                ar[i]=e;
                pro = true;
                poslprohoz=i;
            }

        }
    }while (pro);
    t2 = time(NULL);
    for (i=0; i<pocet; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<t2-t1<<endl;
    return 0;
}
