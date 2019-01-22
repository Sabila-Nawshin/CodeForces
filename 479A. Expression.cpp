#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int res;

    if (a == 1 && b ==1 && c == 1 || (a == 1 && c == 1)) res = a + b + c;
    else if (a == 1 && b == 1) res = 2*c;
    else if (b == 1 && c == 1) res = 2*a;
    else if (a == 1 || b == 1 || c == 1){
        if (a == 1) res = (1 + b) * c;
        if (b == 1) (a < c)? res = (a + 1) * c : res = a * (c + 1);
        if (c == 1) res = a * (b + 1);
    }
    else res = a * b * c;

    cout << res << endl;
    return 0;
}
