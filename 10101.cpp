#include <iostream>
#include "stdio.h"
using namespace std;
#define kuti 10000000
#define lakh 100000
#define hajar 1000
#define shata 100

void resur(long long x){
    if(x>=kuti){
        resur(x/kuti);
        cout<<" kuti";
        x%=kuti;
        resur(x);
    }else if(x>=lakh){
        resur(x/lakh);
        cout<<" lakh";
        x%=lakh;
        resur(x);
    }else if(x>=hajar){
        resur(x/hajar);
        cout<<" hajar";
        x%=hajar;
        resur(x);
    }else if(x>=shata){
        resur(x/shata);
        cout<<" shata";
        x%=shata;
        resur(x);
    }else{
         if(x){
             cout<<" "<<x;
         }
    }
}

int main(void){
    long long x;
    long long temp=1;
    while(cin>>x){
        printf("%4d.",temp);
        resur(x);
        if(x==0){
             cout<<" "<<x;
        }
        temp++;
        cout<<"\n";
    }
    return 0;
}
