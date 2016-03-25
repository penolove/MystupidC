#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int leastsquare(string w[],int r, int c,int h,int wi){
	char rec=w[r][c];
	int n=1;
	int temp=0;
	int ctemp=0; //check temp
	int extend=0;
	while(temp!=1){
		if(r-(extend+1)>=0&&c-(extend+1)>=0&&r+(extend+1)<h&&c+(extend+1)<wi){
			//cout<<"now rec: "<<rec<<"\n";
			for( int i=0;i<2*(extend+2)-1;i++){
				for( int j=0;j<2*(extend+2)-1;j++){
					if(w[r-(extend+1)+i][c-(extend+1)+j]!=rec)
						ctemp=1;
					//cout<<w[r-(extend+1)+i][c-(extend+1)+j]<<" ";
				}
				//cout<<"\n";
			}
			if(ctemp!=1){
				extend++;
				//cout<<"tring extend : "<<extend<<endl;
				//cout<<"r: "<<r<<endl;
				//cout<<"c: "<<c<<endl;
			}else{
				temp=1;
				//cout<<"end extend : "<<extend<<endl;
			}

		}else{
			//cout<<"out of range yo \n";
			//cout<<"end extend : "<<extend<<endl;
			//cout<<"r: "<<r<<endl;
			//cout<<"c: "<<c<<endl;
			temp=1;	
		}

	}

	return n+2*(extend);
}

int main(void){

	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		int height,width,nn;	
		cin>>height;
		string w[height];
		cin>>width;
		cin>>nn;
		cout<<height<<" "<<width<<" "<<nn<<"\n";
		cin.ignore(256,'\n');
		for(int h=0;h<height;h++){
			getline(cin,w[h]);
		}		
		for(int ii=0;ii<nn;ii++){
			int r,c;
			cin>>r>>c;
			cout<<leastsquare(w,r,c,height,width)<<"\n";
		}	
	}
	return 0;
}
