#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void)
{   string ref="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string cs;

    while(getline(cin,cs)){
        for(int i=0;i<cs.size();i++){
            if(cs[i]!=' '){
                cs[i]=ref[ref.find(tolower(cs[i]))-2];
            }
        }
        cout<<cs<<endl;

    }

}
