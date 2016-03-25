
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;



int main()
{
 int row, col;
 cin>>row;
 cin>>col;
 int mat[row][col];
 int temp;

    for (int i=0; i <row; i++){
        for (int j=0; j <col-i; j++){
            scanf("%d",&mat[i][j]);
        }
    }


    for (int i=0; i <row; i++){
      temp=0;
      if(i!=row-1){
        for (int j=0; j <col-i; j++){
            temp=(temp^mat[i][j]);
        }
        for (int j=0; j <col-(i+1); j++){
            temp=(temp^mat[i+1][j]);
        }
         cout<<temp<<"\n";
      }
     
    }


  return 0;
}