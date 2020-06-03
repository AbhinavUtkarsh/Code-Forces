//https://codeforces.com/problemset/problem/158/A
#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int scores[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    int score_kth = scores[k - 1];
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= score_kth && scores[i] > 0)
        {
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}