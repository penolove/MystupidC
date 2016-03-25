#include <iostream>
using namespace std;

int swapsort(int a[],int n){
    int idxoffset=0;
    int idx;
    int temp;
    int swcount=0;
    while(idxoffset<n){
        int mini=n+1;
        for (int i=idxoffset;i<n;i++){
            if(a[i]<mini){
                mini=a[i];
                idx=i;
            }    
        }
        while(idx>idxoffset){
            temp=a[idx];
            a[idx]=a[idx-1];
            a[idx-1]=temp;
            idx--;
            swcount++;
        }
        idxoffset++;
    }
    return swcount;
}


int main(void){
    int N;
    int n;
    cin>>N;
    int a[51];
    for(int i=0;i<N;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        cout<<"Optimal train swapping takes "<<swapsort(a,n)<<" swaps.\n";
    }
}
