#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    int count = 1, maxm = 0;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n - 1; i++){
        if (a[i] <= a[i+1]) count++;
        else {
            maxm = max(count, maxm);
            count = 1;
        }
    }
    maxm = max(count, maxm);

    cout << maxm << endl;
    return 0;
}
