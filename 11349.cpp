#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

bool sysmetric(int n, long long a[]){
	//unknown array size
	bool x;
	x=1;
	int w=0;
	for (int ix=0;ix<(n+1)/2;ix++){
		for (int j=0;j<n;j++){
			if(a[ix*n+j]!=a[(n-1-ix)*n+(n-1-j)]){
				x=0;
			}

		}
	}
	return x;
}



int main(void)
{   int n;
	int N;
	char temp;
	bool allpositve;
	cin>>n;
	for (int i=0;i<n;i++){
		allpositve=1;
		// pass N =
		cin >>temp >>temp;
		cin >>N;
		int j=0;
		long long a[N*N];
		// read in array as one dim
		for (int ix=0;ix<N;ix++){
			for (int j=0;j<N;j++){
				cin>>a[ix*N+j];
				if(a[ix*N+j]<0){
					allpositve=0;
				}
			}
		}
		cout<<"Test #"<<i+1<<": ";
		if(sysmetric(N,a) && allpositve){
			cout<<"Symmetric.\n";
		}else{
			cout<<"Non-symmetric.\n";
		}



	}

	return 0;
}