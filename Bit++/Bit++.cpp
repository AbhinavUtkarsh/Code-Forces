//https://codeforces.com/problemset/problem/282/A
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        string sequence;
        cin >> sequence;
        if (sequence[1] == '+' || sequence[3] == '+')
        {
            value++;
        }
        else
        {
            value--;
        }
    }
    cout << value << endl;

    return 0;
}