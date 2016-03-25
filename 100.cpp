#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{   int x,x1,j,temp;
	int cirlen,tempmax;

    while(cin>>x>>j){
    	cout<<x<<" ";
    	cout<<j<<" ";

    	// fucking x may bigger than j
    	if(x>j){
    		temp=x;
    		x=j;
    		j=temp;
    	}

    	tempmax=0;
    	for(int i=x;i<j+1;i++){
    		x1=i;
    		cirlen=1;
    		while(x1!=1){
    			cirlen++;
    			if(x1%2==0){
    				x1=x1/2;
    			}else{
    				x1=x1*3+1;
    			}
    		}
			if (cirlen>tempmax){
				tempmax=cirlen;
			}

    	}
    	cout<<tempmax<<'\n';
    }
}