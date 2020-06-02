#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int matrix[5][5];
    int locx = 0;
    int locy = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                locx = j;
                locy = i;
            }
        }
    }
    locx = abs(locx - 2);
    locy = abs(locy - 2);
    cout << locx + locy << endl;
    return 0;
}