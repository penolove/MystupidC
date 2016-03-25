#include <iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
         int a,b;
         cin>>a>>b;
         if(a%2!=1){
             a=a+1;
         }
         if(b%2!=1){
             b=b-1;
         }
         cout<<"Case "<<i+1<<": "<<(a+b)*((b-a)/2+1)/2<<"\n";
    }
    return 0;
}
