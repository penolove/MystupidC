#include <iostream>
using namespace std;



int main(void){
    int n;
    while(cin>>n){
        int borrow=0;
        int temp=0;
        int tempborrow;
        //n>borrow can drink off
        //n/3 >borrow can got change more cola
        // 
        temp+=n;
        while(n/3+n%3>=borrow){
           //check can borrow or not
           tempborrow=(3-n%3)%3;
           if((n+tempborrow)/3>=(borrow+tempborrow)){
             borrow+=tempborrow;
             n=(n+tempborrow)/3;
             temp+=n;
           }else{
               if(n/3>0){
                 temp+=n/3;
                 n=n/3+n%3;
               }else{
                 break;
               }
           }
        }
        temp+=(n-borrow)/3;
        if((n-borrow)%3==2){
             temp++;
        }
        cout<<temp<<"\n";

             
    
    }
    return 0;
}
