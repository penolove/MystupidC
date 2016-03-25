#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{   int n,temp,max;
	cin >>n;
	string x[n];

	//key data type ,map
	map<char, int> mapTest;
	//iterator for map (use for loop)
	map<char, int>::iterator it;
	

	char texttemp;
	// as descript in http://stackoverflow.com/questions/5739937/using-getlinecin-s-after-cin
	//	Assuming you typed: 5<enter>John<enter>. Then cin >> number reads JUST 5.
	//  leaving the new-line (enter) character on the stream.
	//using this to igore '\n'
	cin.ignore(256, '\n');
	for (int i=0;i<n;i++){
		getline(cin,x[i]);
	}


	for (int j=0;j<26;j++){
		temp=0;
		for (int i=0;i<n;i++){
			for (int p=0;p<x[i].length();p++){
				if(x[i][p]=='Z'-j||x[i][p]=='z'-j){
					temp++;
				}
			}
		}
		if(temp>0){
			mapTest['Z'-j]=temp;
		}
	}
	while(max!=0){
		max=0;

		for(it = mapTest.begin() ; it != mapTest.end() ; it++){
			// map loop usage:
			// iterator->first = key
    		// iterator->second = value
    		if(it->second>max){
    			texttemp=it->first;
    			max=it->second;
    		}
		}
		mapTest[texttemp]=0;
		if(max==0){
			break;
		}
		cout<<texttemp<<" "<<max<<"\n";
	}



	
}
