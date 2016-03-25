#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	double x[4];
	double y[4];
	int temp1;
	int temp2;

	while(cin>>x[0]){
		 cin>>y[0];
		 cin>>x[1];
		 cin>>y[1];
		 cin>>x[2];
		 cin>>y[2];
	     cin>>x[3];
		 cin>>y[3];
		 for(int i=0;i<4;i++){
		 	 for (int j=(i+1);j<4;j++){
			 	 if(x[i]==x[j]&&y[i]==y[j]){
					temp1=i;
	   				temp2=j;
					//cout<<"the connection point :"<<temp1<<","<<temp2;
					break;				
				 }
			 }

		 }
		 double recx=0;
		 double recy=0;
		 for (int i=0;i<4;i++){
		 	 if(i==temp1||i==temp2){
			 	 continue;
			 }else{
			 	 recx+=x[i]-x[temp1];
				 recy+=y[i]-y[temp1];
			 }
		 }
		 
		 cout<<fixed<<setprecision(3)<<x[temp1]+recx<<" ";
		 cout<<fixed<<setprecision(3)<<y[temp1]+recy<<"\n";
	}


	return 0;

}
