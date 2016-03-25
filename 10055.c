#include <stdio.h>
#include <stdlib.h>


int main(void)
{   
    long long x;
    long long y;
    while (scanf("%lld %lld", &y, &x) != EOF){
    	if(y > x)
    		printf("%lld\n",y-x);
    	else
    		printf("%lld\n",x-y);
    }
    return 0;
}