#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n, m, a;
    cin >> n >> m >> a;

    long long res = ceil((double)(n /a ));
    res *= ceil((double)(m /a ));

    cout << res << endl;
    return 0;
}
