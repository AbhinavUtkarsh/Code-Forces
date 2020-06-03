//https://codeforces.com/problemset/problem/339/A
#include <iostream>
using namespace std;
int main()
{
    int oneCount = 0;
    int twoCount = 0;
    int threeCount = 0;
    string sin;
    getline(cin, sin);
    for (int i = 0; i < sin.size(); i++)
    {
        if (sin[i] == '1')
        {
            oneCount++;
        }
        else if (sin[i] == '2')
        {
            twoCount++;
        }
        else if (sin[i] == '3')
        {
            threeCount++;
        }
    }
    string s1 = "";
    for (int i = 0; i < oneCount; i++)
    {
        s1 += to_string(1) + "+";
    }
    string s2 = "";
    for (int i = 0; i < twoCount; i++)
    {
        s2 += to_string(2) + "+";
    }
    string s3 = "";
    for (int i = 0; i < threeCount; i++)
    {
        s3 += to_string(3) + "+";
    }
    string s = s1 + s2 + s3;
    if (s[s.size() - 1] == '+')
    {

        s[s.size() - 1] = ' ';
    }
    cout << s << endl;
    return 0;
}