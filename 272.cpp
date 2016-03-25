#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{   int temp;
	//for each pair "" e.g. "qqo"v.s"q8o"
	//were wanted transformt to ``qqo''v.s``q8o''
	string x;
	temp=1;
	while(getline(cin,x)){
		//even this line has odds amount of ", 
		//it should pass to effect other lines.
		for (int j=0;j<x.length();j++){
			if(x[j]=='"'){
				if(temp==1){
					cout<<"``";
					temp=0;
				}else{
					cout<<"''";
					temp=1;
				}
			}else{
				cout<<x[j];
			}
		}
		cout<<endl;
	}
	return 0;
}