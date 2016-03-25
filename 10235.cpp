#include <iostream>
#include <cmath>
using namespace std;

//the definition of emirp is that
//n is prime and rev(n)!=n & rev(n) is emirp
bool primeChecker(int x){
    bool temp=1; 
    for (int i=2; i<=sqrt(x);i++){
         if(x%i==0){
             temp=0;
             return temp;
         }
     }
    return temp;
}

int reverseINT(int x){
    int rein=0;
    while(x!=0){
         rein*=10;
         rein+=x%10;
         x/=10;
    }
    return rein;
}


int main(void){
     int n;
     while(cin>>n){
        if(primeChecker(n)){
             if(primeChecker(reverseINT(n))&&reverseINT(n)!=n){
                 cout<<n<<" is emirp.\n";
             }else{
                 cout<<n<<" is prime.\n";
             }
        }else{
             cout<<n<<" is not prime.\n";
        }  
        //cout<< reverseINT(n) <<"\n";
     }
     
     return 0;
}
