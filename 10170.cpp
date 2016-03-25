#include <iostream>
using namespace std;
int main(void){
    long long a,b;
    while(cin>>a>>b){
        long long temp=0;
        while(temp<b){
             temp+=a;
             a++;
        }
        cout<<(a-1)<<"\n";
    }
    return 0;
}
