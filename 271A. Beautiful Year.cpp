#include <bits/stdc++.h>
using namespace std;

int main(){
    int year1;
    cin >> year1;

    while(true){
        year1++;
        string year = to_string(year1);

        if (year[0] != year[1] && year[0] != year [2] && year[0] != year[3] && year[1] != year[2] && year[1] != year[3] && year[2] != year[3]){
            break;
        }
        else{
            year = to_string(year1);
        }
    }

    cout << year1 << endl;
    return 0;
}
