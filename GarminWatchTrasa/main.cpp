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
    ifstream activita("activity.tcx");

    int calories = 0;
    float time = 0;
    float distance = 0;

    int DistanceIndicator=0;

    while(getline(activita, line)){
        ///distance
        if(DistanceIndicator==1){
            DistanceIndicator=0;
            if(line.find("<DistanceMeters>")!=string::npos){
            //cout<<line<<endl;
            line.erase(line.find("<DistanceMeters>"),16);
            line.erase(line.find("</DistanceMeters>"),17);
            //cout<<line<<endl;
            distance+=atof(line.c_str());}
            }
        ///calories
        if(line.find("Calories")!=string::npos){
            //cout<<line<<endl;
            line.erase(line.find("<Calories>"),10);
            line.erase(line.find("</Calories>"),11);
            //cout<<line<<endl;
            calories+=atoi(line.c_str());
        }
        ///time
        if(line.find("TotalTimeSeconds")!=string::npos){
            //cout<<line<<endl;
            line.erase(line.find("<TotalTimeSeconds>"),18);
            line.erase(line.find("</TotalTimeSeconds>"),19);
            //cout<<line<<endl;
            time+=atof(line.c_str());
            DistanceIndicator = 1;
        }
    }

    cout <<"Calories: "<<calories<<" [kiloCalories]"<<endl;
    cout <<"Total Time: "<<time/60<<" [Minutes]"<<endl;
    cout <<"Distance: "<<distance/1000<<" [kiloMeters]"<<endl;
    cout<<calories/503.0<<" [BigMac]"<<endl;

    return 0;
}
