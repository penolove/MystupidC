#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{   int n,temp,max;
	string x[200];
	temp=0;
	while(getline(cin,x[temp])){
		if(x[temp].length()>max){
			max=x[temp].length();
		}
		temp++;
	}
	for (int j=0;j<max;j++){
		for(int i=temp-1;i>=0;i--){
			if(x[i].length()<(j+1)){
				cout<<" ";
			}else{
				cout<<x[i][j];
			}
		}
		cout<<"\n";
	}
}