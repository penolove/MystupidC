#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
using namespace std;

void summarymap(map<string,int> recmap,int n){
	map<string, int>::iterator it;
	//cout<<"hihi\n";;
	for(it=recmap.begin();it!=recmap.end();it++){
		cout<<it->first<<" ";
	    printf("%.4lf\n",it->second*100.0/n);
	}
}


int main(void){
	int n;
	cin>>n;
	int testrec=-1;
	string q;
	int s=0;
	map<string,int> recmap;
	cin.ignore(256,'\n');	
	while(1==1){
		getline(cin,q);
		//for empty line(\n)
		if(q.compare("")==0){
			//cout<<"IgetIn"<<"\n";
			if(testrec>-1){
				summarymap(recmap,s);
				if(testrec!=n-1){
					cout<<"\n";
				}				
				s=0;
			}
			testrec++;
			if(testrec==n){
				break;
			}
			
			recmap.clear();

		}else{
			s++;
	 		recmap[q]++;
		}

	}	


}
