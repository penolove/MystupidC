#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{   string x;
    string y;
    int max1,min1,checkway,temp2;

    while(1==1){
    	temp2=0;
    	cin>>x;
    	cin>>y;

    	if(x[0]=='0'&& x.length()==1 && y[0]=='0'&& y.length()==1 ){
    		return 0;
    	}else{
    		if(x.length()<y.length()){
    			min1=x.length();
    			max1=y.length();
    			checkway=0;
    		}else{
    			min1=y.length();
    			max1=x.length();
    			checkway=1;
    		}
    		int co[max1];
    		int carryone;

    		// here add number from ones to tens and so on
    		// and if their length were not equal , need to check
    		// e.g 1 999 shuold be 3.
    		for(int i=0;i<max1;i++){
    			if(i>(min1-1)){
    				if(checkway==0){
    					co[i]=(int)y[y.length()-1-i]-48;
    				}else{
    					co[i]=(int)x[x.length()-1-i]-48;
    				}
    			}else{
    				co[i]=(int)x[x.length()-1-i]+(int)y[y.length()-1-i]-96;
    			}
    			co[i]=co[i]+carryone;
    			carryone=0;
    			if(co[i]>9){
    				temp2++;
    				carryone=1;
    			}
    		}
    		//avoid to effect next time input
    		carryone=0;






    		if(temp2==0){
    			cout<<"No carry operation.\n";
    		}else if(temp2==1){
    			cout<<temp2<<" carry operation.\n";
    		}else{
    			cout<<temp2<<" carry operations.\n";
    		}
    	}

    }
    return 0;
}
