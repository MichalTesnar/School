#include <iostream>

using namespace std;

void dayInYear(int numberOfDay,int *month, int *day);
int nfirst (int a);

int main()
{
    int cislo,vystup;           //promenne pro funkci n prvnich
    cout<<"N prvnich?"<<endl;
    cin >>cislo;
    vystup = nfirst (cislo);
    cout<<vystup<<endl;

    int x;                      //cislo dne v roce
    int a, b;                   //pozice
    cout<<"Den v roce?"<<endl;
    cin >>x;
    dayInYear(x,&a,&b);
    cout << b <<"."<<a<<".";
    return 0;
}

//n prvnich
int nfirst(int a){
    int b=0;
    for (int i=1;i<=a;i++){
        b=b+i;
    }
    return b;
}

//den v roce
void dayInYear(int numberOfDay,int *month, int *day){
    if(numberOfDay>334){*month=12;
    *day=numberOfDay-334;}
    else if(numberOfDay>304){*month=11;
    *day=numberOfDay-304;}
    else if(numberOfDay>273){*month=10;
    *day=numberOfDay-273;}
    else if(numberOfDay>243){*month=9;
    *day=numberOfDay-243;}
    else if(numberOfDay>212){*month=8;
    *day=numberOfDay-212;}
    else if(numberOfDay>181){*month=7;
    *day=numberOfDay-181;}
    else if(numberOfDay>151){*month=6;
    *day=numberOfDay-151;}
    else if(numberOfDay>120){*month=5;
    *day=numberOfDay-120;}
    else if(numberOfDay>90){*month=4;
    *day=numberOfDay-90;}
    else if(numberOfDay>59){*month=3;
    *day=numberOfDay-59;}
    else if(numberOfDay>31){*month=2;
    *day=numberOfDay-31;}
    else if(numberOfDay>0){*month=1;
    *day=numberOfDay;}
}
