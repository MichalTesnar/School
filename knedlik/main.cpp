#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream knedlik;
    knedlik.open("knedlik.txt");
    knedlik.close();
    return 0;
}
