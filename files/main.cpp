#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //read a file
    ifstream originFile;
    originFile.open("filename.txt");

    //create a new file to write in
    ofstream newFile;
    newFile.open("newFile.txt");

    //create a loading variable

    char text1;
    string text2;

    //printout by characters
    while(originFile.get(text1)){
        cout<<text1;
    }

    //printout by lines that has to find("jak")
    while(getline(originFile,text2)){
        cout<<"Hello"<<endl;
        if(text2.find("jak ")!=string::npos){
            cout<<text2<<endl;
        }
    }

    //close both
    originFile.close();
    newFile.close();

    return 0;
}
