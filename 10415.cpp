#include <iostream>
#include <string>
using namespace std;
string A[1000];


void fingertrans(int fingerarray[],char x,int fingercount[]){
	string xx;
	int w;
	//int turns=0;
	xx=A[(int)x];
	for(int i=0;i<xx.length();i++){
		w=fingerarray[xx[i]-'0'];
		if(w==0){	
			fingercount[xx[i]-'0']++;
		}
	}
	for(int i=0;i<10;i++){
		fingerarray[i]=0;
	}
	for(int i=0;i<xx.length();i++){
		fingerarray[xx[i]-'0']=1;
	}
}	
	


void printfingercount(int fingercount[]){
	for(int i=1;i<10;i++){
		cout<<fingercount[i]<<" ";
	}
	cout<<fingercount[0]<<"\n";
}




int main(void){

	A[(int)'c']="2347890";
	A[(int)'d']="234789";
	A[(int)'e']="23478";
	A[(int)'f']="2347";
	A[(int)'g']="234";
	A[(int)'a']="23";
	A[(int)'b']="2";
	A[(int)'C']="3";
	A[(int)'D']="1234789";
	A[(int)'E']="123478";
	A[(int)'F']="12347";
	A[(int)'G']="1234";
	A[(int)'A']="123";
	A[(int)'B']="12";
	int n;
	cin>>n;
	string sheetM;
	
	cin.ignore(256,'\n');
	for(int i=0;i<n;i++){
		getline(cin,sheetM);
		int fingerarray[10]={0};
		int fingercount[10]={0};
		for(int j=0;j<sheetM.length();j++){
			fingertrans(fingerarray, sheetM[j],fingercount);
		}
		printfingercount(fingercount);
	}



	return 0;
}
