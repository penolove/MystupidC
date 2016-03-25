#include <iostream>
using namespace std;
int main(void){
    int testcase;
    int testdays;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        cin>>testdays;
        int hartals=0;
        int partcounts;
        cin>>partcounts;
        int testmap[10000]={0};

        for(int j=0;j<partcounts;j++){
            int testbase;
            int testloop;
            cin>>testbase;
            testloop=testbase;
            while(testloop<=testdays)
            {
                if(testloop%7!=0&&testloop%7!=6){
                    if(testmap[testloop]==0){
                        hartals+=1;
                        testmap[testloop]=1;
                    }
                }

                testloop+=testbase;
            }
        }
        cout<<hartals<<"\n";
    }
    return 0;

}
