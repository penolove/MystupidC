#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <math.h>
#include <sstream>

using namespace std;

//int 2 str
//ref: http://www.cnblogs.com/oomusou/archive/2007/01/06/613413.html
//another choice
//sprinf
/*
void int2str(int i, char *s) {
  sprintf(s,"%d",i);
}
*/
/*
a more smart base translate
http://edward15241.pixnet.net/blog/post/186218394-uva-11005-%28%E2%98%85%E2%98%85%E2%98%85%29cheapest-base
*/
string int2str(int i) {
  string s;
  stringstream ss(s);
  ss << i;
  return ss.str();
}

string inkcost(int *costar,long long n1){
	
	int inkcostar[36]={0};
	for (int i=1;i<36;i++){
		int n= n1;
		while(n>0){
			inkcostar[i]+=costar[n%(i+1)];
			n/=(i+1);
		}
	}
	int min_temp=inkcostar[1];
	string x=" 2";
	for (int j=2;j<36;j++){
		if(min_temp>inkcostar[j]){
			min_temp=inkcostar[j];
			x=" "+int2str(j+1);
		}else if(min_temp==inkcostar[j]){
			x=x+" "+int2str(j+1);
		}
	}

	return x;
}

int main(void)
{   int n;
	cin>>n;
	int costar[36];
	int test;
	for(int i=0;i<n;i++){
		cout<<"Case "<< (i+1)<<":"<<"\n";
		for(int j=0;j<36;j++){
			cin >>costar[j];
		}
		cin>>test;
		//cout<<"total tests "<<test <<"\n";
		for(int w=0;w<test;w++){
			long long testcase;
			cin >> testcase;
			cout <<"Cheapest base(s) for number "<<testcase<<":"<<inkcost(costar,testcase)<<"\n";
		}
		if(i!=n-1)
			cout<<"\n";

	}
}