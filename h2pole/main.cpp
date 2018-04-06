#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;
#define POCET 100
#define pj 99
int main()
{
    int ar[POCET];         //pole
    int i=0;            //cykly
    cout << "Arrays!" << endl;
    srand(time(NULL));
    for (i=0;i<POCET;i++){
        ar[i]=rand()%10;
        }
    //sort(ar,ar+10);
    //for (i=0;i<POCET;i++){
    //    cout<<i<<"."<<ar[i]<<endl;
    //   }
    cout<<"Tisk "<<POCET<<" prvku."<<endl;
    for (i=0;i<POCET-1;i++){
        cout<<i<<"."<<ar[i]<<" ";
        }
    cout<<ar[pj]<<"."<<POCET<<endl;
    cout<<"Tisk ukocen."<<endl;
    cout<<"Tisk "<<POCET<<" prvku."<<endl;
    for (i=POCET-1;i>0;i--){
        cout<<i<<"."<<ar[i]<<" ";
        }
    cout<<"0."<<ar[pj]<<endl;
    cout<<"Tisk ukocen."<<endl;
    return 0;
}
