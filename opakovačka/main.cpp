#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i;                              //cyklus
    int rep;                            //cyklus
    int a, b, c;                        //sčítance a výsledek
    int pocetspravne=0, pocetspatne=0;  //počty úspěšnosti
    cout<<"Opakování matiky"<<endl;
    cout<<"Kolik příkladù?"<<endl;
    cin>>rep;
    srand(time(NULL));
    for (i=0;i<rep;i++)
        {
        a = rand()%10;
        b = rand()%10;
        cout<<a<<"+"<<b<<"=";
        cin>>c;
            if (c==a+b){
                cout<<"správně"<<endl;
                pocetspravne++;
            }
                else{
                    cout<<"špatně"<<endl;
                    pocetspatne++;
                }
        }
    cout<<"Vypočítal jsi"<<pocetspatne<<"správně."<<endl;
    cout<<"Vypočítal jsi"<<pocetspravne<<"špatně."<<endl;

    return 0;
}
