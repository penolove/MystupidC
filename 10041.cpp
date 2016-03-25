#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    int q;
    int result[a];
    int temp
    for(int i=0;i<a;i++){
      //array size
      cin >> q;
      //array record s_i,s_j
      int w[q];
      for (int j=0;j<q;j++){
        cin >> w[j];
      }
      //sort w
      sort(w,w+q);
      //calculate the sum of distance
      temp=0;
      if(q%2 == 0){
        for (int j=0;j<q;j++){
          temp=temp+abs(w[j]-w[(q/2)-1]);
        }
        result[i]=temp;
      }else{
        for (int j=0;j<q;j++){
          temp=temp+abs(w[j]-w[((q-1)/2)+1-1]);
        }
        result[i]=temp;
      }

    }
    for(int i=0;i<a;i++){
      cout<<result[i]<<"\n";
    }

}
