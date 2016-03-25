#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void){
	 string x;
	 int bltemp=0;
	 while(getline(cin,x)){
		 if(bltemp)
			cout<<"\n";
		 map<char, int> mapTest; 
		 map<char, int>::iterator it;
		 map<char, int>::iterator it_temp;
		 for(int i=0;i<x.length();i++){
		 	 mapTest[x[i]]++;
		 }
		 while(mapTest.size()>0){
			 int temp=10000;
			 int recx=0; 
			 for(it=mapTest.begin();it!=mapTest.end();it++){
				 if(it->second<temp){
					 temp=it->second;
					 it_temp=it;
					 recx=it->first;
				 }else if(it->second==temp) {
				 	 if(it->first>recx){
						 it_temp=it;
						 recx=it->first;
					 }
				 }	 
			 }
			 cout<<(int)it_temp->first<<" "<<it_temp->second<<"\n";
			 mapTest.erase(it_temp);
		 }
	 	bltemp=1;
		x="";
	 }
	return 0;
}
