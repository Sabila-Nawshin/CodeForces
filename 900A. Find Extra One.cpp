#include <iostream>
using namespace std;

int main(){
    long long n, count = 0, count2 = 0;
    cin >> n;

    while(n--){
        long long x, y;
        cin >> x >> y;

        if(x < 0) count ++;
        else count2++;
    }
    if (count < 2 || count2 < 2) cout << "Yes" << endl;
    else cout << "No" << endl;
}
