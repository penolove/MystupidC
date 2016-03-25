#include <iostream>
#include <string>
using namespace std;

int string2S(string n){
    int S=0;
    for(int i=0;i<n.length();i++){
         S+=(n[i]-'0');
    } 
    return S;
}

int digsum(int n){
    int ret=0;
    while(n>0){
         ret+=n%10;
         n/=10;
    }
    return ret;
}


int degreeNine(string n){
    int S=0;
    S=string2S(n);
    //cout<<"now string sum : " <<S<<"\n";
    int degree=0;
    int temps=0;
    int sysP;
    if(S%9==0){
         while(S%9==0&&S>0){
             //cout<<"outwhile\n";
             degree++;
             if(S==9){
                 S=0;
             }
             S=digsum(S);
            // cout<<"now : "<<S<<"\n";
         }
         return degree;
    }else{
         return degree;
    }

}


int main(void){
    string n;
    while(cin>>n){
        if(n=="0"){
             break;
        }
        if(degreeNine(n)==0){
             cout<<n<<" is not a multiple of 9.\n";
        }else{
             cout<<n<<" is a multiple of 9 and has 9-degree "<<degreeNine(n)<<".\n";
        }
    }

}
