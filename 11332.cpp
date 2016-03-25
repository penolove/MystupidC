#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{   int n,temp,max;
	while(cin >>n){
		if(n==0){
			break;
		}
		temp=0;
		while(1==1){
			while(n>0){
				temp+=n%10;
				n/=10;
			}
			if(temp<10){
				break;
			}else{
				n=temp;
				temp=0;
			}
		}
		cout<<temp<<"\n";
	}
}