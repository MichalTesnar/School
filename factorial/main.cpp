#include <iostream>

using namespace std;

int factorial(int x);
int square(int x, int y);
int fib(int x);

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    c = factorial(a);
    cout<<"fac"<<c;
    c = square(a,b);
    cout<<"sq"<<c<<endl;
    c = fib(a);
    cout<<"fib"<<c<<endl;
}

int factorial(int x){
    int i;
    int y;
    y=x;
    for(i=0;i<x;i++){
        y=y*x;
    }
    return x;
}

int square(int x, int y){
    int i;
    int z=x;
    for(i=0;i<y-1;i++){
        cout<<i<<endl;
        x=x*z;
    }
    return x;
}

int fib(int x){
    int i,a=0,b=1,c=0;
    for(i=0;i<x;i++){
        c=b+a;
        a=b;
        b=c;
    }
    return c;
}
