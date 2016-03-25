#include <iostream>
using namespace std;
int main(void){
    long long a,b;
    while(cin>>a>>b){
        long long q=1; 
        long long temp=0;
        while(q*q<=b){
             if(q*q>=a){
                 temp++;
             }
             q++;
        }
        if(a!=0 && b!=0){
            cout<<temp<<"\n";
        }
    }
    return 0;
}
