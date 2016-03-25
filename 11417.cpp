#include <iostream>
#include <algorithm>
using namespace std;



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
	int n ;
	while(cin>>n){
		if(n==0){
			break;
		}
		int G=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<n+1;j++){
				G+=gcd(i,j);	
			}
		}

		cout<<G<<"\n";
	}
}
