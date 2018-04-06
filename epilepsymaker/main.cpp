#include <iostream>
#include <ctime>
#include <graphics.h>
using namespace std;

int main()
{
    int a;
    srand(time(NULL));
    initwindow(500,500);
    while(true){
        a=rand%10;
        cout<<a;
        sleep();
    }

    return 0;
}
