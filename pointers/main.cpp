#include <iostream>
#include <cmath>

using namespace std;
void secToHMS(int sec, int *a,int *b,int *c);
void squareequation(float a,float b, float c, float *x1, float *x2);
int main()
{
    /*int h,m,s,sec;
    cin>>sec;
    secToHMS(sec,&h,&m,&s);
    cout<<h<<":"<<m<<":"<<s<<endl;
    */
    float a,b,c;
    float x1,x2;
    cout<<"a";
    cin>>a;
    cout<<"b";
    cin>>b;
    cout<<"c";
    cin>>c;
    squareequation(a,b,c,&x1,&x2);
    cout<<x1<<" "<<x2;
    return 0;
}
void secToHMS(int sec, int *h,int *m,int *s){
    *h=sec/3600;
    sec=sec%3600;
    *m=sec/60;
    *s=sec%60;
}
void squareequation(float a,float b, float c, float *x1, float *x2){
    *x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    *x2=(-b-sqrt(b*b-4*a*c))/(2*a);
}
