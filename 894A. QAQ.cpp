#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.size(); i++)
        if (s.at(i) == 'Q')
            for (int j = i + 1; j < s.size(); j++)
                if (s.at(j) == 'A')
                    for (int k = j + 1; k < s.size(); k++)
                        if (s.at(k) == 'Q') count ++;

    cout << count << endl;
    return 0;
}
