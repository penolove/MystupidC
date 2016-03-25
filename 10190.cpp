#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

string int2string(int i){
	string s;
	stringstream ss(s);
	if(i>1)
		ss<<i<<" ";
	else
		ss<<i;
	return ss.str();
}


int main(void){
	int n;
	while(cin>>n){

		int m;
		string rec;
		cin>>m;
		if(n==0||n==1){
			cout<<"Boring!\n";
			continue;
		}
		if(m==0||m==1){
			cout<<"Boring!\n";
			continue;
		}
		rec+=int2string(n);
		while(n>1){
			if(n%m==0){
				n/=m;
				rec+=int2string(n);
			}else{
				cout<<"Boring!\n";
				break;
			}
			if(n==1){
				cout<<rec<<"\n";
				break;
			}
		}

	}

	return 0;
}
