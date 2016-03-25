#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{   char ref[100]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char x[100];
    int temp=0;
    int temp2=0;
    while (fgets(x, 50, stdin) != NULL){
    	temp=0;
    	//loop for each element in input x
    	while(x[temp]!='\0'){
    		temp2=0;
    		//check upper2lower case
    		if(x[temp]>65&&x[temp]<90){
    			x[temp]=x[temp]-'A'+'a';
    		}
    		//match input & ref
    		while(ref[temp2]!='\0'){
    			if(x[temp]==' '){
    				printf("%c",x[temp]);
    				break;
    			}else if(x[temp]=='\n'){
    				printf("%c",x[temp]);
    				break;
    			}else if(x[temp]==ref[temp2]){
    				printf("%c",ref[temp2-2]);
    				break;
    			}
    			temp2++;
    		}
    		temp++;
    	}



    }

}
