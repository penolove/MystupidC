#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main(void)
{   int n;
	while(cin>>n){
		int x[n];
		int abs_x[n-1];
		int temp=1;
		for(int i=0;i<n;i++){
			cin>>x[i];
			if(i!=0){
				/*
				//xor will fail QQ
				num=num^i;
				num=num^abs(x[i]-x[i-1]);
				*/
				abs_x[i-1]=abs(x[i]-x[i-1]);
			}
		}
		sort(abs_x,abs_x+(n-1));
		for(int i=1;i<n;i++){
			if(abs_x[i-1]!=(i)){
				temp=0;
			}
		}

		if(temp==1||n==1){
			cout<<"Jolly"<<"\n";
		}else{
			cout<<"Not jolly"<<"\n";
		}

	}
	return 0;
}