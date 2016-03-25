#include <iostream>
using namespace std;
int main(void){
     long long n;
     cin>>n;
     for(int i=0;i<n;i++){
         long long s,d;
         cin>>s>>d;
         long long s1,s2;
         s1=(s+d);
         s2=(s-d);
         if(s1>=0&&s2>=0&&s1%2==0&&s2%2==0){
            cout<<s1/2<<" "<<s2/2<<"\n";
         }else{
             cout<<"impossible"<<"\n";
         }
     }
        
}
