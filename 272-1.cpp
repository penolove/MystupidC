#include <iostream>
using namespace std;
 
int main() {
    string temp;
    int num = 0;
 
    while (getline(cin, temp)) {
        for (int i=0; i<temp.length(); i++) {
            if (temp[i] == '"') {
                num++;
                if (num % 2)
                    cout << "``";
                else
                    cout << "''";
            }
            else
                cout << temp[i];
        }
        cout << endl;
    }
 
    return 0;
}