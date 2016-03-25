#include <iostream>
#include <string>
using namespace std;


int main(void){
	 string n="north";
	 string e="east";
	 string s="south";
	 string w="west";
	 string input;
	 int N;
	 while(cin>>N){
		
		 int dicearray[6]={
	 	 	1,2,3,4,5,6
	 	 };
		 		 
		 int rollingtemp;
	 	 if(N==0){
		 	 break;
		 }
		 for(int i=0;i<N;i++){
		 	 cin>>input;
			 switch(input[0]){
					 case  'n':
							rollingtemp=dicearray[0];	
							dicearray[0]=dicearray[4];
							dicearray[4]=dicearray[5];
							dicearray[5]=dicearray[1];
							dicearray[1]=rollingtemp;
						   	break;
					 case  'e':
							rollingtemp=dicearray[0];	
							dicearray[0]=dicearray[2];
							dicearray[2]=dicearray[5];
							dicearray[5]=dicearray[3];
							dicearray[3]=rollingtemp;
							 break;
					 case  's':
							rollingtemp=dicearray[0];	
							dicearray[0]=dicearray[1];
							dicearray[1]=dicearray[5];
							dicearray[5]=dicearray[4];
							dicearray[4]=rollingtemp;
							 break;
				  	 case  'w':
							rollingtemp=dicearray[0];	
							dicearray[0]=dicearray[3];
							dicearray[3]=dicearray[5];
							dicearray[5]=dicearray[2];
							dicearray[2]=rollingtemp;
							 break;

			 }
		 }
		 cout<<dicearray[0]<<"\n";
	 }
}
