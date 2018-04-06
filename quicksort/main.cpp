#include <iostream>
#include <stdlib.h>
#include <time.h>

#define value 100000

using namespace std;

void arrayFill(int ar[]);
void arrayPrint(int ar[]);
void quickSort (int start, int finish, int ar[]);
int compare (const void * a, const void * b);

int main()
{
    int* ar=new int[value];
    arrayFill(ar);
    int t1 = time(NULL);
    //quickSort(0,value-1,ar);
    qsort (ar, value, sizeof(int), compare);
    arrayPrint(ar);
    int t2 = time(NULL);
    cout<<endl<<"time:"<<t2-t2<<endl;
    return 0;
}

//fills arrays with random numbers from 0 to 9
void arrayFill(int ar[]){
    srand(time(NULL));
    for (int i=0;i<value;i++){
        ar[i]=rand()%100;
    }
}

//prints arrays
void arrayPrint(int ar[]){
    for (int i=0;i<value;i++){
        cout<<ar[i];
    }
}

//helping function for stdlib.h qsort
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

//sorting algorithm
void quickSort (int start, int finish, int ar[]){
    int pivot = ar[(start+finish)/2];
    int i = start;
    int j = finish;
    int helper;
    do {
       while (ar[i]<pivot){i++;}
       while (ar[j]>pivot){j--;}
       if (i<=j){
            helper = ar[i];
            ar[i] = ar[j];
            ar[j] = helper;
            i++;j--;

       }
    }while (i <= j);
    if (start<j) {quickSort(start,j,ar);}
    if (i<finish) {quickSort(i,finish,ar);}
}
