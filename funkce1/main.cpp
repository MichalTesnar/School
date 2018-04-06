#include <iostream>
using namespace std;

int mocnina(int x, int n){
 int i;
 long long int vysledek = 1;
 for(i = 0; i < n; i++){
        vysledek = vysledek * x;
 }
 return vysledek;
}
int main()
{
    int i;
    for(i = 0; i < 100; i++){
        cout <<i<<" "<<mocnina(2,i)<<endl;
 }

}
