#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <math.h>
#include <stdio.h>

using namespace std;

//http://www.cnblogs.com/oomusou/archive/2007/02/09/646440.html
// nice ref for pass array to function
		/*
		cout<<"*a :"<<*a<<"which saves value " <<"\n";
		cout<<"a :"<< a <<"which saves address"<<"\n";
		cout<<"&a :"<< &a <<"which saves pointer address"<<"\n";
		*/

int strparse(long long *a,string rec,int n){
	int neg=1;
	int num=0;
	int idx=0;
	int cont=0;
	for(int i=0;i<(n+1);i++){
		if(rec[i]<='9'&&rec[i]>='0'){
			cont=1;
			num=num*10+(rec[i]-'0');
		}else if(rec[i]=='-'){
			//prepare negtive
			neg=-1;
			cont=1;
		}else{
			//when the space or '\0' summary
			a[idx]=num*neg;
			//cout<<a[idx]<<" ";
			idx++;
			num=0;
			neg=1;
			cont=0;
		}
	}
	return idx;
}

//http://hoyusun.blogspot.tw/2012/07/uva-10268-498.html
/* more smart simulate string in
        istringstream input(str);
        while(input >> num[top])
*/


int main(void)
{   long long x;
	string rec;
	int n;
	while(cin>>x){
		long long sum=0,r=1;
		cin.ignore(256,'\n');
		getline(cin,rec);
		// the array will shroter than string
		long long a[rec.length()];
		n=strparse(a,rec,rec.length());
		for(int i=n-2;i>=0;i--){
			sum+=a[i]*(n-i-1)*r;
			//pow will wrong and using int
			r*=x;
		}
		//cout<<"\n";
		printf("%lld\n", sum);

	}
	return 0;
}