#include <iostream>
#include <string>
using namespace std;

void printarray(int array[],int traparrary[],int n,int  m){
    int temp=0;
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(!traparrary[temp]){
                cout<<array[temp];
             }else{
                cout<<'*';
             }
             temp++;
         }
         cout<<"\n";
     }
}


int main(void){
    int m,n;
    int coF=1;
    while(cin>>n>>m){
         if(n==0 && m==0){
             break;
         }
         if(coF!=1){
             cout<<"\n";
         }
         cout<<"Field #"<<coF<<":\n";
         coF++;
         string x[n];
         int array[100000]={0};
         int traparrary[100000]={0};
         int temp=0;
         for (int i=0;i<n;i++){
            cin>>x[i];
            for(int j=0;j<m;j++){
                 if(x[i][j]=='*'){
                    traparrary[temp]=1;
                    for(int ix=-1;ix<2;ix++){
                         for(int jx=-1;jx<2;jx++){
                             if((i+ix)>=0&&(j+jx)>=0&&(i+ix)<n&&(j+jx)<m)
                                array[(i+ix)*m+(j+jx)]++;
                         }
                    }
                 }

                 temp++;
            }
         }
         
        printarray(array,traparrary,n,m); 
    } 

    return 0;
}
