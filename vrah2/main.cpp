#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    char character;
    string radek;

    int position = 0;

    ifstream file1("vrah.txt");
    ofstream file2("newvrah.txt");

    if(file1.is_open()){
        while(getline(file1,radek)){
        position = radek.find(" ne");
        savedposition = radek.find(" ne");
        while(position!=string::npos and position!=savedposition){
            if (radek.find("ne")==0) radek.erase(position+1,2);
            position = radek.find(" ne");
        }
        cout<<radek<<endl;
        file2<<radek<<endl;
        }
    }
    else{
        cout<<"nope"<<endl;
    }
    file1.close();
    file2.close();
    return 0;
}
