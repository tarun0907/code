#include <bits/stdc++.h>
using namespace std;

/*
Write a program to print all the possible combinations according to the input values.
Example :
Given Values
'1' : ['Z', 'Y', 'A'],
'2' : ['B', 'O'],
'12' : ['L']
'3' : ['U', 'P']
Output : [ZBU, ZBP, ZOU, ZOP, YBU, YBP, YOU, YOP, ABU, ABP, AOU, AOP, LU, LP]

*/


void genCombination(vector<char> board[],int input[], string ans, int index, int size)
{
    if (index == size)
    {
        cout << ans << " ";
        return;
    }
    int inputIndex = input[index];
    int len = board[inputIndex].size();
    //cout<<len<<" "<<inputIndex<<endl;
    for (int i = 0; i < len; i++)
    {
        genCombination(board, input, ans + board[inputIndex][i], index + 1, size);
    }
}

int main()
{
        vector<char> board[] =
        {
            {},
            {'Z', 'Y', 'A'},
            {'B', 'O'},
            {'L'},
            {'U', 'P'}
        };
    int input[] = {1,2,4};
    int input_2[]={3,4};
    int size = sizeof(input) / sizeof(input[0]);
    int size_2 = sizeof(input_2) / sizeof(input_2[0]);
    genCombination(board, input, string(""), 0, size);
    genCombination(board, input_2, string(""), 0, size_2);
    cout<<endl;
    return 0;
}