#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main(void){
     int n;
     string readline;
     cin >> n;
     cin.ignore(256,'\n');
     map<string,int> girlmap;
     map<string,int>::iterator girlmapIt;
     for(int i=0;i<n;i++){
        // cout<<"hihi";
         string country;
         getline(cin,readline);
         istringstream in(readline) ;
         in >>country;
         girlmap[country]++;
     }
     for (girlmapIt=girlmap.begin();girlmapIt!=girlmap.end();girlmapIt++){
         cout<<girlmapIt->first<<" "<<girlmapIt->second<<"\n";
     }

     return 0;

}
