#include <iostream>
#include <time.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int uzly[]={0,3,5,9,13,16,18};
    int hrany[]={1,2,3,
                0,2,
                0,1,3,4,
                0,2,4,5,
                2,3,5,
                3,4};
    int moznosti[]={};
    srand(time(NULL));
    int pozice=rand()%5 + 1;

    cout<<"Chces dojit do bodu 0"<<endl;

    cout<<"Pozice:"<<pozice<<endl;

    while(pozice!=0){
        int pocet=(uzly[pozice+1]-uzly[pozice]);
        cout<<"Moznosti:";
        int moznosti[4];
        if(pocet<4){
            for(int i=0;i<4;i++){
            moznosti[i]=10;
            }
        }
        for(int i=0;i<pocet;i++){
            cout<<hrany[uzly[pozice]+i]<<",";
            moznosti[i]=hrany[uzly[pozice]+i];
        }
        cout<<endl<<"Kam jdeme dale?"<<endl;
        int input;
        cin>>input;
        for(int i=0;i<4;i++){
            if(moznosti[i]==input){
                pozice=input;
                break;
            }
            }
    }

    cout<<"Gratulace, vyhral jsi!"<<endl;

    return 0;
}
