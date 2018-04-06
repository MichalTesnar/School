#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    string line;

    ifstream sablona("mapa1.html");
    ifstream activita("activity.tcx");
    ofstream stranka("stranka.html");


    float LatitudeDegrees = 0;
    float LongitudeDegrees = 0;

    while(getline(sablona, line))
    {
            if(line.find("tadddddy")!=string::npos){
               while(getline(activita, line))
            {
                ///LatitudeDegrees
                if(line.find("LatitudeDegrees")!=string::npos)
                {
                    //cout<<line<<endl;
                    line.erase(line.find("<LatitudeDegrees>"),17);
                    line.erase(line.find("</LatitudeDegrees>"),18);
                    //cout<<line<<endl;
                    stranka<<"{lat:"<<line;
                }
                ///LongitudeDegrees
                if(line.find("LongitudeDegrees")!=string::npos)
                {
                    //cout<<line<<endl;
                    line.erase(line.find("<LongitudeDegrees>"),18);
                    line.erase(line.find("</LongitudeDegrees>"),19);
                    //cout<<line<<endl;
                    stranka<<",lng:"<<line<<"},"<<endl;
                }
            }
            }
            else{
                stranka<<line<<endl;
                cout<<line<<endl;
            }
    }
    return 0;
}
