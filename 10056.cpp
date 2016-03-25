#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <math.h> 
#include <stdio.h>
using namespace std;


// the fomula is (1-p)^(t-1)*p/(1-(1-p)^N)
//where t is the order , N is total players,p is the winner p



int main(void)
{   int cas;
	cin>>cas;
	int N;
	double p;
	int t;
	for (int i=0;i<cas;i++){
		cin >>N >>p >>t;
		cout.precision(4);
		if (p==0.0){
			cout<< "0.0000"<<"\n";
		}else if (p==1.0 && t==1) {
			cout<< "1.0000"<<"\n";
		}else if(p==1.0 && t!=1){
			cout<< "0.0000"<<"\n";
		}else{
			// ... cout sucks... and I don't know how to use cout to pass
			printf("%.4f\n", pow((1-p),t-1)*p/(1-pow((1-p),N)));

		}
	}
	return 0;
}