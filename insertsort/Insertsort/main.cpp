#include <iostream>
#include <ctime>
#include <cstdlib>
#define pocet 10
using namespace std;
int i,j,d;
int ar[pocet];
void printarray()
{
    for (i=0; i<pocet; i++)
    {
        cout<<ar[i]<<" ";
    }
}
void fillarray()
{
for (i=0; i<pocet; i++)
    {
        ar[i]=rand()%100;
    }
}
void insertsort(){
for(j=1; j<pocet; j++)

    {
        i=j;
        while(i>0 and ar[i]<ar[i-1])
        {
            d=ar[i-1];
            ar[i-1]=ar[i];
            ar[i]=d;
            i--;
        }
    }
}
int main()
{
    int j=0;        //cykly
    int d;        //pomocne promenne
    int t1;
    int t2;
    t1 = time(NULL);
    srand(time(NULL));
    fillarray();
    printarray();
    insertsort();
    t2 = time(NULL);
    printarray();
    for (i=0; i<pocet; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<t2-t1<<endl;
    return 0;
}
