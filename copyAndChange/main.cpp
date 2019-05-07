#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream originFile;
    originFile.open("originFile.txt");

    ofstream newFile;
    newFile.open("newFile.txt");

    string line;

    while(getline(originFile,line)){
            while(line.find("@LX-481")!=string::npos){
                line.replace(line.find("@LX-481"),line.find("@LX-481")+5,"a");
            }

            while(line.find("@LX-482")!=string::npos){
                line.replace(line.find("@LX-482"),line.find("@LX-482")+5,"e");
            }

            while(line.find("@LX-483")!=string::npos){
                line.replace(line.find("@LX-483"),line.find("@LX-483")+5,"u");
            }


        cout<<line<<endl;
        newFile<<line<<endl;
    }


    return 0;
}
