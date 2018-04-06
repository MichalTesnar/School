#include <iostream>
#include <ctime>
#include <cstdlib>

#define pocet 10

using namespace std;
void coutar(int array[])
{
    int i;
    for(i=0; i<10; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void fillarray(int array[])
{
    int i;
    srand(time(NULL));
    for(i=0; i<pocet; i++)
    {

        array[i]=rand()%10;
    }
}

int analyse1(int array[],int where)
{
    int b=0,i;
    for (i=0; i<pocet; i++)
    {
        if (array[where]>array[i])
        {
            b++;
        }
    }
    return b;
}

int analyse2(int array[],int where){
    int c=0,i;
    for (i=0; i<pocet; i++)
    {
        if (array[where]==array[i])
        {
            c++;
        }
    }
    return c;
}

void sortit(int array[],int array2[])
{
    int i,j,b,c;
    for (i=0; i<pocet; i++)
    {
        b=asalyse1(array,i);
        c=asalyse2(array,i);
        for (j=0;j<c<j++){
          array2[b]=ar[i];
          b++
        }
    }
}

int main()
{
    int ar1[pocet];
    int ar2[pocet];
    fillarray(ar1);
    coutar(ar1);
    sortit(ar1,ar2);
    coutar(ar1);
    return 0;
}
