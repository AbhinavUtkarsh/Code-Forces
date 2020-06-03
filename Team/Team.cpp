//https://codeforces.com/problemset/problem/112/A
#include <iostream>

using namespace std;

int main()
{
    int n;
    int problems[1000][3];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> problems[i][j];
        }
    }
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += problems[i][j];
        }
        if (sum >= 2)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}