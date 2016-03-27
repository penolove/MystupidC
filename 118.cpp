#include <iostream>
#include <sstream>
using namespace std;

string dirset="NESW";

char Directiontrans(char D,char S){
    int a;
    switch(D){
        case 'N':a=0;break;
        case 'E':a=1;break;
        case 'S':a=2;break;
        case 'W':a=3;break;
    }
    if(S=='R'){
        a++;
        a%=4;
    }else{
        a--;
        if(a<0){
            a+=4;
        }
    }
    return dirset[a];
}

/*
int checkfalling(string x,char N){
     if(x.find(N)==std::string::npos){
         return 1;
     }else{
         return 0;
     }
}

*/

int initialX(int avoidX[],int n){
     for(int i=0;i<n;i++){
         avoidX[i]=0;
     }
}

int main(void){
    int boundx,boundy;
    cin>>boundx>>boundy;
    int avoidX[(boundx+1)*(boundy+1)];
    initialX(avoidX,(boundx+1)*(boundy+1));
    //string avoidX[(boundx+1)*(boundy+1)];
    string x;
    cin.ignore(256,'\n');
    while(getline(cin,x)){
        istringstream in(x);
        int rox,roy;
        in>>rox>>roy;
        //cout<<"coordinate("<<rox<<","<<roy<<")";
        char D;
        in>>D;
        //cout<<"Direction"<<D;
        string orders;
        getline(cin,orders);
        int fallflag=0;
        int n=boundx+1;
        for(int i=0;i<orders.length();i++){
            if(fallflag==0){
                switch(orders[i]){
                    case 'F':
                        switch(D){
                            case 'N':
                                if(roy<boundy){
                                     roy++;
                                }else{
                                     if(avoidX[rox*n+roy]==0){
                                         fallflag=1;
                                         avoidX[rox*n+roy]=1;
                                     }   
                                }
                                break;
                            case 'S':
                                if(roy>0){
                                     roy--;
                                }else{
                                     if(avoidX[rox*n+roy]==0){
                                         fallflag=1;
                                         avoidX[rox*n+roy]=1;
                                     }   
                                }
                                break;
                            case 'E':
                                if(rox<boundx){
                                     rox++;
                                }else{
                                     if(avoidX[rox*n+roy]==0){
                                         fallflag=1;
                                         avoidX[rox*n+roy]=1;
                                     }   
                                }
                                break;
                            case 'W':
                                if(rox>0){
                                     rox--;
                                }else{
                                     if(avoidX[rox*n+roy]==0){
                                         fallflag=1;
                                         avoidX[rox*n+roy]=1;
                                     }   
                                }
                                break;
                        }
                        //cout<<"move to ("<<rox<<","<<roy<<") flag="<<fallflag<<"\n";
                        break;
                    default:     
                        D = Directiontrans(D,orders[i]);
                        //cout<<"turns to "<<D<<"\n";
                }
            }
        }
        cout<<rox<<" "<<roy<<" "<<D;
        if(fallflag){
             cout<<" "<<"LOST"<<"\n";
        }else{
             cout<<"\n";
        }
    }

}
