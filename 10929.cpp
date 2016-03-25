#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(void){
    string x;
    while(1==1){
         cin>>x;
         if(x.compare("0")==0){
             break;
         }else{
             int odd=0;
             int even=0;
             for(int i=0;i<x.length();i++){
                 if(i%2==0){
                     odd+=x[i]-'0';
                 }else{
                     even+=x[i]-'0';
                 }
             }
            if(abs(odd-even)%11==0){
                cout<<x<<" is a multiple of 11.\n";
            }else{
                 cout<<x<<" is not a multiple of 11.\n";
            }
         }
    }
    
    return 0;
}
