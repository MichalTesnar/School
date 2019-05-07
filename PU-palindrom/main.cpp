#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream soubor;
    int delka;
    char znak1, znak2;

    soubor.open("text.txt", ios::binary|ios::in);
    if(!soubor.is_open()){
        cout<<"Neni otevreno"<<endl;
        return 0;
    }

    soubor.seekg(0, ios::end);
    delka=soubor.tellg();

    for(int i=0; i<delka/2; i++)
    {
        soubor.seekg(i);
        soubor.read(&znak1,sizeof(char));
        soubor.seekg(-i-1, ios::end);
        soubor.read(&znak2,sizeof(char));
        if(znak1!=znak2){
                break;
        }
    }

    if(znak1!=znak2){
        cout<<"Neni to palindrom"<<endl;
    }
    else{
        cout<<"Je to palindrom"<<endl;
    }

    soubor.close();
    return 0;
}
