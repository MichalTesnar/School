#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    char SourceFile[100];
    char TargetFile[100];
    char character;

    int vynechani=0;
    int n=0;

    cout<<"Jmeno zdrojoveho souboru?"<<endl;
    cin>>SourceFile;

    cout<<"Jmeno noveho souboru?"<<endl;
    cin>>TargetFile;

    ifstream file1(SourceFile);
    ofstream file2(TargetFile);

    if(file1.is_open()){
        while(file1.get(character)){
            if (character==' ' or character=='\n'){
                vynechani = 3;
            }
            if (vynechani==2 and character =='n'){
                vynechani--;
                n=1;
            }
            else if (vynechani==1 and character =='e' and n==1){
                vynechani--;
                n=0;
            }
            else if (vynechani==1 and character !='e' and n==1){
                cout<<"n"<<character;
                file2<<"n"<<character;
                vynechani--;
                n=0;
            }
            else {
               cout<<character;
               file2<<character;
               vynechani--;
               n=0;
            }
        }
        file1.close();
        file2.close();
    }
    else{
        cout<<"nope"<<endl;
    }

    return 0;
}
