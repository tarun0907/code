#include <iostream>
#include <vector>
using namespace std;

/*
 Write a method Boolean isValidSudoku(int[][]Sudoku)
Returns true if the given Sudoku is correctly arranged otherwise false

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
*/

    bool isValidSudoku(vector<vector<char>> board) {
       for(int i=0; i<9; i++)
        {
            //checking for same numbers in row
            int rcCheck[10]={0};
            for(int j=0; j<9; j++)
            {
                if(board[i][j]!='.')
                rcCheck[board[i][j]-'0']++;
            }
            for(int x=1; x<=9; x++)
                if(rcCheck[x]>1)
                return false;
        }
        //checking for same numbers in colums
        for(int i=0; i<9; i++)
        {
            int rcCheck[10]={0};
            for(int j=0; j<9; j++)
            {
                if(board[j][i]!='.')
                rcCheck[board[j][i]-'0']++;
            }
            for(int x=1; x<=9; x++)
                if(rcCheck[x]>1)
                return false;
        }
        //checking for same numbers in 3*3 sub boxes
        for(int i=0; i<9; i+=3)
        {
            for(int j=0; j<9; j+=3)
            {
                int rcCheck[10]={0};
                for(int k=i; k<3+i; k++)
                {
                    for(int l=j; l<3+j; l++)
                    {
                        if(board[k][l]!='.')
                        rcCheck[board[k][l]-'0']++;
                    }
                }
                for(int x=1; x<=9; x++)
                if(rcCheck[x]>1)
                return false;
            }
        }
        return true;
    }

int main()
{
    //giving input 
    vector<vector<char>> board1 = {
                                    {'5','3','.','.','7','.','.','.','.'},
                                    {'6','.','.','1','9','5','.','.','.'},
                                    {'.','9','8','.','.','.','.','6','.'},
                                    {'8','.','.','.','6','.','.','.','3'},
                                    {'4','.','.','8','.','3','.','.','1'},
                                    {'7','.','.','.','2','.','.','.','6'},
                                    {'.','6','.','.','.','.','2','8','.'},
                                    {'.','.','.','4','1','9','.','.','5'},
                                    {'.','.','.','.','8','.','.','7','9'}  
                                };
    if(isValidSudoku(board1))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    vector<vector<char>> board2 =   {{'8','3','.','.','7','.','.','.','.'}
                                    ,{'6','.','.','1','9','5','.','.','.'}
                                    ,{'.','9','8','.','.','.','.','6','.'}
                                    ,{'8','.','.','.','6','.','.','.','3'}
                                    ,{'4','.','.','8','.','3','.','.','1'}
                                    ,{'7','.','.','.','2','.','.','.','6'}
                                    ,{'.','6','.','.','.','.','2','8','.'}
                                    ,{'.','.','.','4','1','9','.','.','5'}
                                    ,{'.','.','.','.','8','.','.','7','9'}};

    if(isValidSudoku(board2))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    return 0;
}