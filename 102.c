#include<stdio.h>
typedef int Intarray[2] ;

enum{B = 0, G = 1, C = 2};
int * countnumber(int numbers[3][3]){
	int i ,j ,h;
	int totalsum=0;
	int tempsum=0;
	int temprec=0;
	static  int output[2];
	int recsum[6];
   	char s[][4]={"BCG", "BGC", "CBG", "CGB", "GBC","GCB"};
	for ( i=0; i<3; i++){
		for ( j=0; j<3; j++){
			totalsum=totalsum+numbers[i][j];
		}
	}
	int rmlist[6][3]={ {B, C, G}, {B, G, C}, {C, B, G}, {C, G, B}, {G, B, C},
                        {G, C, B}};
	for ( h=0; h<6;h++){
		tempsum=0;
		for( i=0; i<3; i++){
			tempsum=tempsum+numbers[i][rmlist[h][i]];
		}	

		recsum[h]=totalsum-tempsum;

	}

	tempsum=totalsum;
	for ( h=0; h<6;h++){
		//printf("%d\n",recsum[h]);
		if(recsum[h]<tempsum){
			tempsum=recsum[h];
			temprec=h;
		}
	}
	output[0]=tempsum;
	output[1]=temprec;
	//printf("%d\n",temprec);
	printf("%s %d\n", s[temprec],tempsum );

	return output ;
}




int main(){
	int i,j;
	int numbers[3][3] ; 

	for ( i=0; i<3; i++){
		for ( j=0; j<3; j++){
		scanf("%d",&numbers[i][j]);
		}
	}
	countnumber(numbers);

}


