
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int rStart = 0;
    int rEnd = row - 1;
    int cStart = 0;
    int cEnd = col - 1;

    while (rStart <= rEnd && cStart <= cEnd)
    {
        for (int col = cStart; col <= cEnd; col++)
        {
            cout << matrix[rStart][col] << " ";
        }
        rStart++;

        for (int row = rStart; row <= rEnd; row++)
        {
            cout << matrix[row][cEnd] << " ";
        }
        cEnd--;

        for (int col = cEnd; col >= cStart; col--)
        {
            cout << matrix[rEnd][col] << " ";
        }
        rEnd--;

        for (int row = rEnd; row >= rStart; row--)
        {
            cout << matrix[row][cStart] << " ";
        }
        cStart++;
    }

    
    cout << endl;
    cout << endl;


    rStart = 0;
    rEnd = row - 1;
    cStart = 0;
    cEnd = col - 1;

    while (rStart <= rEnd && cStart <= cEnd)
    {
        for (int col = cEnd; col >= cStart; col--)
        {
            cout << matrix[rStart][col] << " ";
        }
        rStart++;

        for (int row = rStart; row <= rEnd; row++)
        {
            cout << matrix[row][cStart] << " ";
        }
        cStart++;

        for (int col = cStart; col <= cEnd; col++)
        {
            cout << matrix[rEnd][col] << " ";
        }
        rEnd--;

        for (int row = rEnd; row >= rStart; row--)
        {
            cout << matrix[row][cEnd] << " ";
        }
        cEnd--;
    }

    return 0;
}