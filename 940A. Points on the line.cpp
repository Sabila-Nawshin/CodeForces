#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int n, d, temp;
    cin >> n >> d;

    vector <int> x;
    for(int i = 0; i < n; i++){
        cin >> temp;
        x.push_back(temp);
    }

    sort(x.begin(), x.end());

    int i, j, minm = n, res = 0;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(j - i == 1 && res == 0) res = n - 1;
            if(x[j] - x[i] <= d) {
                res = (i + (n - 1 - j));
                minm = min(res, minm);
            }
        }
    }

    res = min(minm, res);
    cout << res << endl;


    return 0;
}
