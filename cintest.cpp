#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(void)
{   int n,temp,max;
	char test[10];
	cin >>n;
	cin.ignore(256,'\n');
	cin.getline(test,10);
	cout<<n<<" "<<test;
}