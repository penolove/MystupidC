#include <iostream>
#include <algorithm>
#include <string>
#include <map>

// 948 - Fibonaccimal Base
// display a int using Fibonaccimal base
// it will have unique representation if base were not consecutive
// i.e. 1001(o), 1100(x)
using namespace std;

int main(void)
{   
	int recordtable[100000];
	recordtable[0]=1;
	recordtable[1]=2;
	int n;
	int recordtimes=1;
	int test;
	int test1;
	int present;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>test;
		test1=test;
		present=0;
		int maxx=0;
		int idx=0;
		int qp[100000]={0};
		while(test>0){
			idx=0;
			while(test>=recordtable[idx]){
				if(idx==recordtimes){
					recordtable[idx+1]=recordtable[idx]+recordtable[idx-1];
					recordtimes++;
				}
				idx++;
			}
			idx--;
			test-=recordtable[idx];
			//cout<<test<<"\n";
			qp[idx]=1;
			if(idx>maxx){
				maxx=idx;
			}
		}
		cout<<test1<<" = ";
		for(int i=maxx;i>-1;i--){
			cout<<qp[i];
		}
		cout<<" (fib)";
		cout<<"\n";
	}
		
}
