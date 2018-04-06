#include <iostream>
#include <graphics.h>

using namespace std;

void vybarvi(int x, int y, int bpix, int bhran);

int main()
{
    cout << "Hello world!" << endl;
    initwindow(500,500);
    setcolor(6);
    circle(250,250,100);
    vybarvi(250,250,WHITE,6);
    getch();
    return 0;
}

void vybarvi(int x, int y, int bpix, int bhran){
    putpixel(x,y,bpix);
    //delay(1);
    if (getpixel(x,y-1)!=bpix and getpixel(x,y-1)!=bhran){
        vybarvi(x,y-1,bpix,bhran);
    }
    if (getpixel(x+1,y)!=bpix and getpixel(x+1,y)!=bhran){
        vybarvi(x+1,y,bpix,bhran);
    }
    if (getpixel(x-1,y)!=bpix and getpixel(x-1,y)!=bhran){
        vybarvi(x-1,y,bpix,bhran);
    }
    if (getpixel(x,y+1)!=bpix and getpixel(x,y+1)!=bhran){
        vybarvi(x,y+1,bpix,bhran);
    }
}
