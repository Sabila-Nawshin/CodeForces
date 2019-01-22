#include <iostream>
using namespace std;

int main(){
    int x, h, m;
    cin >> x;
    cin >> h >> m;

    long long count  = 0;
    while (true) {
        if (h != 0 && ((h % 7 == 0 && h / 7 == 1) || (h % 17 == 0 && h / 17 == 1))) break;
        if (m != 0 && ((m % 7 == 0 && m / 7 == 1) || (m % 17 == 0 && m / 17 == 1) || (m % 27 == 0 && m / 27 == 1) || (m % 37 == 0 && m / 37 == 1) || (m % 47 == 0 && m / 47 == 1) || (m % 57 == 0 && m / 57 == 1))) break;

        if (m - x >= 0) m -= x;
        else {
            m = 60 + (m - x);
            if (h - 1 >= 0) h--;
            else h = 23;
        }
        count++;
        //cout << h << ":" << m << endl;
    }
    cout << count << endl;
    return 0;
}
