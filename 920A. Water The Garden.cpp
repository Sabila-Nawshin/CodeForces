#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;

        int a[n] = {0};
        int g[n] = {0};

        for (int i = 0; i < k; i++){
            int temp;
            cin >> temp;
            a[temp - 1] = 1;
        }


        int sum, count = 0;
        while(true){
            sum = 0;

            for (int j = 0; j < n; j++){
                if (a[j] == 1){
                    if (j - count >= 0) g[j - count] = 1;
                    if (j + count < n) g[j + count] = 1;
                }
            }
            count ++;

            for (int i = 0; i < n; i++) sum += g[i];

            if (sum == n)
                break;

        }

        cout << count << endl;
    }
    return 0;
}
