#include <bits/stdc++.h>
using namespace std;
void depthFirstSearch(int row, int column, vector<vector<char>> &grid)
{
    if (row >= grid.size() || row < 0 || column < 0 || column >= grid[row].size() || grid[row][column] == '0')
    {
        return;
    }
    grid[row][column] = '0';
    depthFirstSearch(row + 1, column, grid);
    depthFirstSearch(row - 1, column, grid);
    depthFirstSearch(row, column + 1, grid);
    depthFirstSearch(row, column - 1, grid);
}
int isLandCount(vector<vector<char>> &grid)
{
    int count = 0;
    for (int row = 0; row < grid.size(); row++)
    {
        for (int column = 0; column < grid[row].size(); column++)
        {
            if (grid[row][column] == '1')
            {
                count++;
                depthFirstSearch(row, column, grid);
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<char>> grid = {{'1', '1', '0', '0', '0'},
                                 {'1', '1', '0', '0', '0'},
                                 {'0', '0', '1', '0', '0'},
                                 {'0', '0', '0', '1', '1'}};

    cout << isLandCount(grid)<<endl;
    cout<<grid.size()<<endl;
    return 0;
}