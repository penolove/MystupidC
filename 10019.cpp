#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <math.h>
using namespace std;

int de2bin(int n){
	int temp=0;
	int ones=0;
	while(pow(2,temp)<n){
		temp++;
	}

	while(n>0){
		if(n>=pow(2,temp)){
			n-=pow(2,temp);	
			ones+=1;
		}else{
			temp--;
		}

	}
	return ones;
}


int hex2bin(int n1){
	int temp=0;
	int ones=0;
	int n=0;
	while(n1>0){
		n+=n1%10*pow(16,temp);
		temp++;
		n1/=10;
	}

	temp=0;
	while(pow(2,temp)<n){
		temp++;
	}

	while(n>0){
		if(n>=pow(2,temp)){
			n-=pow(2,temp);			
			ones+=1;
		}else{
			temp--;
		}

	}
	return ones;
}



int main(void)
{   int n;
	int check;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>check;
		cout<<de2bin(check)<<" "<<hex2bin(check)<<"\n";
	}
}

	
