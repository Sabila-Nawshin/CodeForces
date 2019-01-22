#include <iostream>
using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int dragon[d + 1] = {0};

    for (int i = k; i <= d; i += k) dragon[i] = 1;
    for (int i = l; i <= d; i += l) dragon[i] = 1;
    for (int i = m; i <= d; i += m) dragon[i] = 1;
    for (int i = n; i <= d; i += n) dragon[i] = 1;

    int count = 0;
    for (int i = 1; i <= d; i++) count += dragon[i];
    //for (int i = 1; i <= d; i++) cout << dragon[i] << " ";

    cout << count << endl;
    return 0;
}
