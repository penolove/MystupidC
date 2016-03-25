#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <math.h>
using namespace std;

int kerker=0;

void update(int *i){
	 *i+=50;
}


int main(void){
     update(&kerker);	 
	 cout<<kerker;
	 return 0;
}

