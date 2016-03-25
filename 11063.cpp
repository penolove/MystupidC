#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


bool b2seq(int n, int arr[]){
		int temp[20001]={0};
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(temp[arr[i]+arr[j]]==0){
					temp[arr[i]+arr[j]]=1;
				}else{
					return 0;
				}
			}
		}
		return 1;
}

//B2-sequence
int main(void)
{   int	times=0;
	int n;
	while(cin>>n){
		times++;
		int arr[n];
		int tempp=1;
		int increasing=1;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]<tempp){
				increasing=0;
			}
			tempp=arr[i];
		}
		if(increasing==1){
			if(b2seq(n,arr))
				cout<<"Case #"<<times<<": It is a B2-Sequence."<<"\n\n";
			else{
				cout<<"Case #"<<times<<": It is not a B2-Sequence."<<"\n\n";
			}
		}else{
			cout<<"Case #"<<times<<": It is not a B2-Sequence."<<"\n\n";
		}
	}

	return 0;

}