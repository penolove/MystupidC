# include <iostream>
# include <math.h>
# include <stdio.h>
using namespace std;

// radius of earth is 6440
// second arc distance need to calculate the shortest




double dircdist(long long r ,double angle){
	return sqrt(2*r*r*(1- cos(angle *M_PI/ 180.0)));
	}

double cirdist(long long r ,double angle){

		return 2*M_PI*r*angle/360;
}


int main(void){
	//I need to calculate 2*Pi*r *(angle_ratio)
	//and direct dist sprt(a^2+b^2-2*a*b*cos*angle)
	long long radio;
			while(cin>>radio){
				 radio+=6440;
			 	 double degree;
				 cin>>degree;
				//seems that degree 
				 string pretype;
				 cin>>pretype;
				 if(pretype.compare("deg")!=0){
					 degree/=60;
				 }
				 // if more than one round
				 while(degree>=0){
				 	degree-=360; 
				 }
				 degree+=360;

				 // it doesn't mention but need to calculate shortest cir distance.
				 if(degree>180){
				 	 degree=360-degree;
				 }
				 printf("%.6lf %.6lf\n",cirdist(radio,degree),dircdist(radio,degree));

				 
			}

	return 0;		 
	};

				 

		 

