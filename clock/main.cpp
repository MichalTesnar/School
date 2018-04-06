#include <iostream>

using namespace std;

void rekurze();
int rekurzivnimocnina(int a,int b);
int factorial(int a);
int fib(int n);

int a=0;

int main()
{
    for (int i=0;i<50;i++){
        if (factorial(i)>0){
        cout<<i<<" "<<factorial(i)<<endl;}
    }
    return 0;
}

void rekurze(){
    cout << a++ <<endl;
    if (a<100) {rekurze();};
    cout << "Konec"<<endl;
}

int rekurzivnimocnina(int a, int b){
    if (b==0) return 1;
    else return a*rekurzivnimocnina(a,b-1);
}

int factorial(int a){
    if (a==0) return 1;
    else return a*factorial(a-1);
}

int fib(int n){
    if (n==0) return 0;
    else if (n==1) return 1;
    else return fib(n-1)+fib(n-2);
}
