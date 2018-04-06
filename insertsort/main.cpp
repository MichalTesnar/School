#include <iostream>
#include <ctime>
#include <cstdlib>
#define pocet 10000

using namespace std;
//Function for printing arrays
void printarray(int array[], int len)
{
    int i;
    for (i=0; i<len; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
//Function for filling arrays with rand integers
void fillarray(int array[], int len)
{
    int i;
    for (i=0; i<len; i++)
    {
        array[i]=rand()%1000;
    }
}
//Function for sorting arrays by insert sort
void insertsort(int array[], int len)
{
    int i,d,j;
    for(j=1; j<len; j++)
    {
        i=j;
        while(i>0 and array[i]<array[i-1])
        {
            d=array[i-1];
            array[i-1]=array[i];
            array[i]=d;
            i--;
        }
    }
}
//Main function
int main()
{
    int ar[pocet];
    int t1,t2;
    t1 = time(NULL);
    srand(time(NULL));
    fillarray(ar,pocet);
    printarray(ar,pocet);
    insertsort(ar,pocet);
    t2 = time(NULL);
    printarray(ar,pocet);
    cout<<"Time result of sorting alg: "<<t2-t1<<endl;
    return 0;
}
