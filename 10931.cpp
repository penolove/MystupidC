#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <sstream>

using namespace std;
string int2str(int i) {
    string s;
    stringstream ss(s);
    ss << i;
    return ss.str();
}
int main(void)
{   int	n;
	while(cin>>n){
		string x;
		if(n==0){
			break;
		}
		cout<<"The parity of ";
		int a=0;
		while(n!=0){
			a+=n%2;
			x+=int2str(n%2);
			n/=2;
		}
		for (int i=(x.length()-1);i>-1;i--){
			cout<<x[i];
		}
		cout<<" is "<<a<<" (mod 2).\n"; 

	}
}
