#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[105];
    int count[256] = {0}, oddCount = 0;
    gets(str);

    for (int i = 0; str[i]!= 0; i++){
        count[str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] >= 1){
            oddCount++;
        }
    }

    if (oddCount%2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";

    return 0;
}
