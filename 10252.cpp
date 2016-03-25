#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{   int n,tempx,tempy,max;
	string x,y,out;
	//cin>>x;


	// 5dog78, if not mention separate by space/tab/\n
	//should use getline
	while(getline(cin,x)){
		getline(cin,y);
		out="";
		for (int j=0;j<26;j++){
			tempx=0;
			tempy=0;
			//check the string here have 'a'+j ornot
			if(x.find('a'+j)!=std::string::npos){
				tempx=1;
				x[x.find('a'+j)]=' ';
			}else{
				tempx=0;	
			}
			if(y.find('a'+j)!=std::string::npos){
				tempy=1;
				y[y.find('a'+j)]=' ';
			}else{
				tempx=0;
			}
			if(tempx&&tempy){
				out+='a'+j;
				//check if there exist more than one 'a'+j
				j--;
			}

		}
		cout<<out<<"\n";
	}
}