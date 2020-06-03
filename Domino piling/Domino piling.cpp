//https://codeforces.com/problemset/problem/50/A
#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int totalDominos = (int)((n * m) / 2);
    cout << totalDominos << endl;
    return 0;
}