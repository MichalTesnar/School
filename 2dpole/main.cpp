#include <iostream>
#include <time.h>
#include <bits/stdc++.h>

using namespace std;


//Declaration of maze matrix
int matrix[6][6]={
        {0,1,1,0,0,1},
        {1,0,1,1,1,0},
        {1,1,0,1,0,0},
        {0,1,1,0,1,0},
        {0,1,0,1,0,1},
        {1,0,0,0,1,0}
        };

int main()
{
    int direction;
    int povolenyinput[6];

    for (int i=0;i<6;i++){
        for (int j=0;j<6;j++){
            printf("%d",matrix[i][j]);
            }
        printf("\n");
        }

    srand(time(NULL));
    int pozice=rand()%5 + 1;

    do{
        cout<<"Position:"<<pozice<<endl;
        cout<<"Possibilities:";

        for (int j=0;j<6;j++){
            if(matrix[pozice][j]==1){
                cout<<j;
                if (j!=5){cout<<",";}
                }
            }

        do{
            cout<<endl<<"Where shall our next step lead us, sir?"<<endl;
            cin>>direction;}
        while(direction<0 or direction>5 or matrix[pozice][direction]==0);
        pozice=direction;

    }while(pozice!=0);

    cout<<"GAME OVER"<<endl;

    return 0;
}
