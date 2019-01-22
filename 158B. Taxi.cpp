#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cin >> n;

    int a[n], count[5] = {0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
        count [a[i]]++;
    }

    int res = 0;

    res += count[3] + count[4];

    if (count[1] > count[3]) count[1] -= count[3];
    else count[1] = 0;

    res += count[2] / 2;

    if (count[2] % 2 == 1){
        if (count[1] >= 2) count[1] -= 2;
        else count[1] = 0;
        res++;
    }

    res += (count[1] / 4);
    if (count[1] % 4 > 0) res++;

    cout << res << endl;

    return 0;
}
