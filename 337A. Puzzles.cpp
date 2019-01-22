#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int f[m];
    for (int i = 0; i < m; i++) cin >> f[i];

    sort(f, f + m);

    int minm = 1001;
    for (int i = 0; i < m - n + 1; i++){
        int diff;
        if(i + n - 1 > m) break;
        diff = f[i + n - 1] - f[i];

        minm = min(minm, diff);
    }

    cout << minm << endl;
    return 0;
}


//7 5 10 10 12 22
