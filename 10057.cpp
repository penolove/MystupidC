#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <math.h>
using namespace std;


// fuck selection sort will over time
void selectsort(int* x,int* x2,int n){
	for(int i=0;i<n;i++){
		double mintemp=65537;
		int tempidx=0;
		for(int j=0;j<n;j++){
			if(x[j]<mintemp&&x[j]<65537){
				mintemp=x[j];
				tempidx=j;
			}
		}
		x[tempidx]=65537;
		x2[i]=mintemp;
	}
	
}



int main(void){
	int n;
	while(cin>>n){
		int x[n];
		//int x2[n];
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
	
		std::sort (x, x+n);		
		if (n%2==1){
			//the minimum is the (n/2+1)-1 
			int xp=0;
			cout<<x[n/2]<<" ";
			for(int i=0;i<n;i++){
				if(x[i]==x[n/2]){
					xp++;
				}
			}
			cout<<xp<<" 1\n";
		}

		else{
			cout<<x[n/2-1]<<" ";
			int xp=0;
			for(int i=0;i<n;i++){
				if(x[i]>=x[n/2-1]&&x[i]<=x[n/2]){
					xp++;
				}

			}
			cout<<xp<<" ";
			cout<<x[n/2]-x[n/2-1]+1<<"\n";
		}


	}

	return 0;
}
