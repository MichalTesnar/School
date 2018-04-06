#include <iostream>

using namespace std;

int plusone(int a);

int main()
{
    int a;
    cout << "Hello world!" << endl;
    cin >> a;
    a = plusone(a);
    cout << a;
    return 0;
}
int plusone(int a){
    a=a+1;
    return a;
}
