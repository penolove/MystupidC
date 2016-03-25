//kuti(10000000)=10^7,lakh(100000)=10^5,hajar(1000)=10^3,shata(100)=10^2
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i,count=1;
	long long int nn,n,base[]={pow(10,14),pow(10,12),pow(10,10),pow(10,9),pow(10,7),pow(10,5),pow(10,3),pow(10,2)};
	char s[9][10]={"kuti","lakh","hajar","shata","kuti","lakh","hajar","shata"};
	while (scanf("%lld",&nn)!=EOF) {
		n=nn;
		printf("%4d.", count);  //竟然要標題!!! 
		count++;
		for(i=0;i<8;i++){
			if(n/base[i]>0){
				printf(" %d %s",int(n/base[i]),s[i]);
				n=n%base[i];
			}
		}
		
		printf(" %d",nn%100);			
		printf("\n");
	}
    return 0;
}
