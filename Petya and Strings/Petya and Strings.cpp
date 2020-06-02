#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s1;
    string s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int flag = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1 << endl;
            flag = 1;
            break;
        }
        else if (s1[i] > s2[i])
        {
            cout << 1 << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << 0 << endl;
    }
    return 0;
}