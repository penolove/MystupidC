
#include <iostream>

using namespace std;

int main(void){
	int n;
	int rec=1;
    cin>>n;
	for(int i=0;i<n;i++){
		 int x1,x2,y1,y2;
		 cin>>x1>>y1;
		 cin>>x2>>y2;
		 int leng1=x1+y1;
		 int leng2=x2+y2;
		 int step=0;
		 if(leng2>leng1){
			step=y1+(leng2-y2)+1;

			while(leng2-leng1>1){
				 step+=(leng2);
				 leng2--;
			}
		 }else{
		    step=y1-y2;
		 }
		 cout<<"Case "<<rec<<": "<<step<<"\n";
	/*	 if(i!=n-1){
		 	cout<<"\n";
		 }*/
		 rec++;
	}
		
	return 0;
}
