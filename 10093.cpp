#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{   string x;
	int num;
	int temp,temp2;
	int max;
	int sum;
	while(getline(cin,x)){
		
		sum=0;
		//N at least 2;
		max=1;
		temp=0;
		temp2=0;


		for (int j=0;j<x.length();j++){
			if(x[j]>='0' &&x[j] <='9'){
				num=x[j]-'0';
			}else if(x[j]>='A'&& x[j]<='Z'){
				num=x[j]-'A'+10;
			}else if(x[j]>='a'&& x[j]<='z'){
				num=x[j]-'a'+36;
			}else{
				continue;
			}
			if(num>max){
				max=num;
			}
			sum+=num;
			//make sure it's a integer.
			temp2=1;
		}

		if(temp2){
			for (int j=max;j<=61;j++){
				if(sum%j==0){
					cout<<j+1<<'\n';
					temp=1;
					break;
				}
			}
		}
		if(temp==0){
			cout<<"such number is impossible!"<<endl;
		}


	}

	return 0;

}