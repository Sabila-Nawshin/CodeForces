#include <iostream>
using namespace std;

int main()
{
    int N, cnt[602] = {0}, temp;
    cin >> N;

    while(N--)
    {
        cin >> temp;
        cnt[temp]++;
    }

    int diploma = 0;
    for(int i = 1; i < 602; i++)
    {
        if(cnt[i] >= 1) diploma++;
    }

    cout << diploma << endl;
    return 0;
}
