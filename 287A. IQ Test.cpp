#include <iostream>
using namespace std;

bool res(char sq[][4], char c){
    int sum = 0;
    for (int a = 0; a < 3; a++){
        for (int b = 0; b < 3; b++){
            sum  = 0;
            for (int i = b; i < (2 + b); i++)
                for (int j = a; j < (2 + a); j++)
                    if (sq[i][j] == c) sum ++;

            if (sum >= 3) return true;
        }
    }

    return false;
}

int main(){
    char sq[4][4];

    for (int i = 0; i < 4; i ++)
        for (int j = 0; j < 4; j++)
            cin >> sq[i][j];

    bool check1 = res(sq, '#');
    bool check2 = res(sq, '.');

    if (check1 || check2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
