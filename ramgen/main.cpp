#include <iostream>
#include <ctime>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int ar[]={1,2,3,4,5};
    /*cout<<&ar<<endl;
    cout<<*ar<<endl;
    cout<<ar[0]<<endl;
    cout<<ar[1]<<endl;
    cout<<*(ar+1)<<endl;*/
    int i,j;
    srand(time(NULL));
    i=rand()%10;
    j=i+10;
    for (i;i<j;i++){
       cout<<ar[i]<<endl;
    }
    return 0;
}
