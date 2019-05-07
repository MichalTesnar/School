#include <iostream>

using namespace std;

int main()
{
    struct zamestnanec{
        char jmeno[30];
        int vek;

    };

    zamestnanec clovek;

    cin>>clovek.jmeno;
    clovek.vek=99;

    cout<<clovek.jmeno;

    return 0;
}
