#include <iostream>



using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    unsigned char znak = 'è';
    char lol = 0x61;
    cout<<hex<<"0x"<<lol;
    cout<<znak<<endl;
    cout<<(int) znak<<endl;

    for(znak=1;znak!=0;znak++){
        cout<<(int)znak<<znak<<endl;
    }
    return 0;

}
