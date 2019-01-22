#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    int res;
    cin >> a >> b;

    int dif = abs(a - b);
    if(dif % 2 == 0){
        dif /= 2;
        res = dif * (dif + 1);
    }
    else{
        dif /= 2;
        res = dif * (dif + 1);
        res += dif + 1;
    }

    cout << res << endl;

    return 0;
}
