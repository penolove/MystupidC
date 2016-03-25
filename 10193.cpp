#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>
#include <math.h>

using namespace std;


int binary2int(string x){
	int sum=0;
	int n= x.length();
	for(int i=0;i<n;i++){
		sum+=(x[n-i-1]-'0')*pow(2,i);
	}
	return sum;
}



int gcd(int i1,int i2){
	int newi1;
	int newi2;
	if(i1>i2){
		newi1=i1-i2;
		newi2=i2;
	}else if (i1==i2){
		return i1;
	}else if (i2>i1){
		newi1=i2-i1;
		newi2=i1;
	}
	return gcd(newi1,newi2);
}


int main(void){
	string s1,s2;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s1;
		cin>>s2;
		int i1=binary2int(s1);
		int i2=binary2int(s2);
		//recursive gcd
		cout<<"Pair #"<<i+1<<": ";
		if(gcd(i1,i2)>1){
			cout<<"All you need is love!\n";
		}else{
			cout<<"Love is not all you need!\n";
		}

	}
return 0;

}
