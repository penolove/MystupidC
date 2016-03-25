#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{   int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char week[7][10] = {"Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday", "Saturday","Sunday" };
    //testing number
    int a;
    cin>>a;
    //4/4 is Monday
    //turns to abouslute day
    int stdmon=4+monthdays[0]+monthdays[1]+monthdays[2];
    int month;
    int days;
    int temp;
    int temp2[a];
    for(int i=0;i<a;i++){
      temp=0;
      cin >> month;
      cin >> days;
      for(int j=0;j<month-1;j++){
        
        temp=temp+monthdays[j];
      }
      temp=temp+days;
      temp2[i]=temp-stdmon;
      //cout<<abs(temp-stdmon)%7<<"\n";
    }

    for (int i=0;i<a;i++){
      if(temp2[i]>0){
        cout<<week[(abs(temp2[i])%7)]<<"\n";
      }else{
        cout<<week[(7-(abs(temp2[i])%7))%7]<<"\n";
      }

    }


}
